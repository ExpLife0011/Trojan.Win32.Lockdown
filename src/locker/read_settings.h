/*
	@title
		AHXRScreenLock
	@author
		AHXR (https://github.com/AHXR)
	@copyright
		2017

	AHXRScreenLock is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	AHXRScreenLock is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with AHXRScreenLock.  If not, see <http://www.gnu.org/licenses/>.
*/
//=======================================================
#include								<string>

#define MAX_PASSWORD_SIZE				16
#define PASSWORD_HASH_LENGTH			64
#define ATTACH_FILE						L"AHXRLocker_Attachment.exe"
#define ATTACH_FILE_C					"AHXRLocker_Attachment.exe"

extern std::string s_password;
extern std::string s_message;

