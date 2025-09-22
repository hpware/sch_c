import requests
import re

def fetch_html(url, cookie):
    try:
        headers = {'User-Agent': 'Mozilla/5.0'}  # Add a user-agent to ensure the request is accepted
        response = requests.get(url, headers=headers, cookies=cookie)
        response.raise_for_status()  # Raise an exception for HTTP errors
        return response.text
    except requests.exceptions.RequestException as e:
        print(f"An error occurred while fetching the HTML: {e}")
        return None

def extract_rollcall_id(html_content):
    # Regular expression pattern to find rollcall_id
    pattern = r"rollcall_id\s*=\s'(\d+)'"
    
    # Search for the pattern in the HTML content
    match = re.search(pattern, html_content)
    
    if match:
        return match.group(1)
    return None

def main():
    url = "https://irs.zuvio.com.tw/student5/irs/rollcall/1412725"
    cookie = {"PHPSESSID": "ba9tdllds9plbvtt1vpbo4ohc5"}
    
    html_content = fetch_html(url, cookie)
    
    if html_content:
        rollcall_id = extract_rollcall_id(html_content)
        if rollcall_id:
            print(f"Found rollcall_id: {rollcall_id}")
        else:
            print("rollcall_id not found in the HTML content")

if __name__ == "__main__":
    main()
