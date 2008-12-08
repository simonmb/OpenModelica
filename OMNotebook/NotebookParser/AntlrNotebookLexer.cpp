/* $ANTLR 2.7.7 (2006-11-01): "lexer.g" -> "AntlrNotebookLexer.cpp"$ */
#include "AntlrNotebookLexer.hpp"
#include <antlr/CharBuffer.hpp>
#include <antlr/TokenStreamException.hpp>
#include <antlr/TokenStreamIOException.hpp>
#include <antlr/TokenStreamRecognitionException.hpp>
#include <antlr/CharStreamException.hpp>
#include <antlr/CharStreamIOException.hpp>
#include <antlr/NoViableAltForCharException.hpp>

AntlrNotebookLexer::AntlrNotebookLexer(ANTLR_USE_NAMESPACE(std)istream& in)
	: ANTLR_USE_NAMESPACE(antlr)CharScanner(new ANTLR_USE_NAMESPACE(antlr)CharBuffer(in),true)
{
	initLiterals();
}

AntlrNotebookLexer::AntlrNotebookLexer(ANTLR_USE_NAMESPACE(antlr)InputBuffer& ib)
	: ANTLR_USE_NAMESPACE(antlr)CharScanner(ib,true)
{
	initLiterals();
}

AntlrNotebookLexer::AntlrNotebookLexer(const ANTLR_USE_NAMESPACE(antlr)LexerSharedInputState& state)
	: ANTLR_USE_NAMESPACE(antlr)CharScanner(state,true)
{
	initLiterals();
}

void AntlrNotebookLexer::initLiterals()
{
	literals["ButtonData"] = 72;
	literals["CellGroupingRules"] = 112;
	literals["Ellipse"] = 42;
	literals["ShowCellBracket"] = 107;
	literals["PrivateEvaluationOptions"] = 85;
	literals["AutoItalicWords"] = 79;
	literals["PageHeaderLines"] = 59;
	literals["False"] = 140;
	literals["SubsuperscriptBox"] = 29;
	literals["WindowFrame"] = 115;
	literals["StartModelEditor"] = 45;
	literals["PaperWidth"] = 137;
	literals["DirectedInfinity"] = 44;
	literals["Center"] = 134;
	literals["PrintingStyleEnvironment"] = 125;
	literals["CellDingbat"] = 103;
	literals["CellTags"] = 94;
	literals["UnderscriptBox"] = 30;
	literals["PageBreakBelow"] = 62;
	literals["GrayLevel"] = 14;
	literals["ParentDirectory"] = 160;
	literals["GeneratedCell"] = 106;
	literals["SubscriptBox"] = 28;
	literals["CellLabelMargins"] = 100;
	literals["FontSize"] = 48;
	literals["ButtonStyle"] = 74;
	literals["Magnification"] = 159;
	literals["Right"] = 132;
	literals["InputAutoReplacements"] = 80;
	literals["StyleDefinitions"] = 122;
	literals["CellHorizontalScrolling"] = 104;
	literals["TextAlignment"] = 53;
	literals["CounterBox"] = 25;
	literals["StyleBox"] = 17;
	literals["PrintingCopies"] = 127;
	literals["TextData"] = 9;
	literals["ScreenRectangle"] = 77;
	literals["All"] = 149;
	literals["PrintingOptions"] = 126;
	literals["CharacterEncoding"] = 75;
	literals["FormBox"] = 21;
	literals["FileName"] = 16;
	literals["Icon"] = 40;
	literals["RGBColor"] = 15;
	literals["Hyphenation"] = 67;
	literals["CellFrameColor"] = 96;
	literals["SuperscriptBox"] = 27;
	literals["RowBox"] = 22;
	literals["CellFrameLabels"] = 97;
	literals["PageHeaders"] = 58;
	literals["SqrtBox"] = 34;
	literals["BoxBaselineShift"] = 65;
	literals["GenerateCell"] = 157;
	literals["ButtonBox"] = 20;
	literals["FormatType"] = 56;
	literals["PageWidth"] = 57;
	literals["OLEData"] = 46;
	literals["ButtonFunction"] = 71;
	literals["CellMargins"] = 102;
	literals["CellAutoOverwrite"] = 158;
	literals["WindowFloating"] = 120;
	literals["FontSlant"] = 47;
	literals["WindowSize"] = 113;
	literals["VisioFillFormat"] = 91;
	literals["TraditionalForm"] = 142;
	literals["OverscriptBox"] = 31;
	literals["LineSpacing"] = 66;
	literals["Annotation"] = 37;
	literals["Left"] = 133;
	literals["Closed"] = 131;
	literals["InputForm"] = 144;
	literals["rule"] = 12;
	literals["StyleMenuListing"] = 82;
	literals["ShowStringCharacters"] = 76;
	literals["CellFrameMargins"] = 98;
	literals["FrontEnd"] = 4;
	literals["None"] = 148;
	literals["Open"] = 130;
	literals["CellLabelPositioning"] = 101;
	literals["CounterIncrements"] = 83;
	literals["GroupPageBreakWithin"] = 86;
	literals["ImageRangeCache"] = 154;
	literals["CellFrameLabelMargins"] = 99;
	literals["CellGroupData"] = 10;
	literals["PageBreakWithin"] = 63;
	literals["Inherited"] = 136;
	literals["GraphicsData"] = 150;
	literals["FrontEndVersion"] = 123;
	literals["CellOpen"] = 105;
	literals["PageFooterLines"] = 61;
	literals["AutoGeneratedPackage"] = 78;
	literals["list"] = 6;
	literals["FontVariations"] = 52;
	literals["PrintingPageRange"] = 128;
	literals["Notebook"] = 7;
	literals["Polygon"] = 41;
	literals["AdjustmentBox"] = 26;
	literals["ImageMargins"] = 152;
	literals["LinebreakAdjustments"] = 89;
	literals["NumberMarks"] = 88;
	literals["GridBox"] = 23;
	literals["ButtonEvaluator"] = 73;
	literals["ShowCellLabel"] = 108;
	literals["InterpretationBox"] = 36;
	literals["ImageSize"] = 151;
	literals["WindowClickSelect"] = 121;
	literals["TagBox"] = 24;
	literals["Null"] = 147;
	literals["Line"] = 43;
	literals["Rule"] = 11;
	literals["StandardForm"] = 143;
	literals["VisioLineFormat"] = 90;
	literals["RuleDelayed"] = 13;
	literals["BoxData"] = 19;
	literals["CounterAssignments"] = 84;
	literals["InitializationCell"] = 55;
	literals["PageFooters"] = 60;
	literals["FontWeight"] = 50;
	literals["WindowMoveable"] = 119;
	literals["Extent"] = 92;
	literals["Visible"] = 69;
	literals["Automatic"] = 141;
	literals["ImageRegion"] = 153;
	literals["FontColor"] = 49;
	literals["StyleData"] = 18;
	literals["TextJustification"] = 54;
	literals["True"] = 139;
	literals["RadicalBox"] = 35;
	literals["DefaultInputFormatType"] = 146;
	literals["ScriptMinSize"] = 81;
	literals["List"] = 5;
	literals["Equal"] = 38;
	literals["CellFrame"] = 95;
	literals["BoxMargins"] = 64;
	literals["WindowMargins"] = 114;
	literals["Evaluatable"] = 70;
	literals["Smaller"] = 135;
	literals["Diagram"] = 39;
	literals["ScreenStyleEnvironment"] = 124;
	literals["NamePosition"] = 93;
	literals["UnderoverscriptBox"] = 32;
	literals["WindowWidth"] = 138;
	literals["Cell"] = 8;
	literals["ModelEditor"] = 156;
	literals["CellBracketOptions"] = 109;
	literals["FontFamily"] = 51;
	literals["WindowToolbars"] = 118;
	literals["Background"] = 111;
	literals["ImageCache"] = 155;
	literals["FractionBox"] = 33;
	literals["Editable"] = 110;
	literals["PrivateFontOptions"] = 129;
	literals["OutputForm"] = 145;
	literals["WindowElements"] = 116;
	literals["Active"] = 68;
	literals["WindowTitle"] = 117;
	literals["DefaultFormatType"] = 87;
}

ANTLR_USE_NAMESPACE(antlr)RefToken AntlrNotebookLexer::nextToken()
{
	ANTLR_USE_NAMESPACE(antlr)RefToken theRetToken;
	for (;;) {
		ANTLR_USE_NAMESPACE(antlr)RefToken theRetToken;
		int _ttype = ANTLR_USE_NAMESPACE(antlr)Token::INVALID_TYPE;
		resetText();
		try {   // for lexical and char stream error handling
			switch ( LA(1)) {
			case 0x5d /* ']' */ :
			{
				mRBRACK(true);
				theRetToken=_returnToken;
				break;
			}
			case 0x5b /* '[' */ :
			{
				mLBRACK(true);
				theRetToken=_returnToken;
				break;
			}
			case 0x7d /* '}' */ :
			{
				mRCURLY(true);
				theRetToken=_returnToken;
				break;
			}
			case 0x7b /* '{' */ :
			{
				mLCURLY(true);
				theRetToken=_returnToken;
				break;
			}
			case 0x2c /* ',' */ :
			{
				mCOMMA(true);
				theRetToken=_returnToken;
				break;
			}
			case 0x41 /* 'A' */ :
			case 0x42 /* 'B' */ :
			case 0x43 /* 'C' */ :
			case 0x44 /* 'D' */ :
			case 0x45 /* 'E' */ :
			case 0x46 /* 'F' */ :
			case 0x47 /* 'G' */ :
			case 0x48 /* 'H' */ :
			case 0x49 /* 'I' */ :
			case 0x4a /* 'J' */ :
			case 0x4b /* 'K' */ :
			case 0x4c /* 'L' */ :
			case 0x4d /* 'M' */ :
			case 0x4e /* 'N' */ :
			case 0x4f /* 'O' */ :
			case 0x50 /* 'P' */ :
			case 0x51 /* 'Q' */ :
			case 0x52 /* 'R' */ :
			case 0x53 /* 'S' */ :
			case 0x54 /* 'T' */ :
			case 0x55 /* 'U' */ :
			case 0x56 /* 'V' */ :
			case 0x57 /* 'W' */ :
			case 0x58 /* 'X' */ :
			case 0x59 /* 'Y' */ :
			case 0x5a /* 'Z' */ :
			case 0x61 /* 'a' */ :
			case 0x62 /* 'b' */ :
			case 0x63 /* 'c' */ :
			case 0x64 /* 'd' */ :
			case 0x65 /* 'e' */ :
			case 0x66 /* 'f' */ :
			case 0x67 /* 'g' */ :
			case 0x68 /* 'h' */ :
			case 0x69 /* 'i' */ :
			case 0x6a /* 'j' */ :
			case 0x6b /* 'k' */ :
			case 0x6c /* 'l' */ :
			case 0x6d /* 'm' */ :
			case 0x6e /* 'n' */ :
			case 0x6f /* 'o' */ :
			case 0x70 /* 'p' */ :
			case 0x71 /* 'q' */ :
			case 0x72 /* 'r' */ :
			case 0x73 /* 's' */ :
			case 0x74 /* 't' */ :
			case 0x75 /* 'u' */ :
			case 0x76 /* 'v' */ :
			case 0x77 /* 'w' */ :
			case 0x78 /* 'x' */ :
			case 0x79 /* 'y' */ :
			case 0x7a /* 'z' */ :
			{
				mID(true);
				theRetToken=_returnToken;
				break;
			}
			case 0x22 /* '\"' */ :
			{
				mQSTRING(true);
				theRetToken=_returnToken;
				break;
			}
			case 0x9 /* '\t' */ :
			case 0xa /* '\n' */ :
			case 0xd /* '\r' */ :
			case 0x20 /* ' ' */ :
			{
				mWHITESPACE(true);
				theRetToken=_returnToken;
				break;
			}
			default:
				if ((LA(1) == 0x28 /* '(' */ ) && (LA(2) == 0x2a /* '*' */ ) && ((LA(3) >= 0x0 /* '\0' */  && LA(3) <= 0x7f))) {
					mCOMMENT(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == 0x28 /* '(' */ ) && (LA(2) == 0x2a /* '*' */ ) && (true)) {
					mCOMMENTSTART(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == 0x2a /* '*' */ ) && (LA(2) == 0x29 /* ')' */ )) {
					mCOMMENTEND(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == 0x60 /* '`' */ ) && (true) && (true)) {
					mTHICK(true);
					theRetToken=_returnToken;
				}
				else if ((_tokenSet_0.member(LA(1))) && (true) && (true)) {
					mNUMBER(true);
					theRetToken=_returnToken;
				}
			else {
				if (LA(1)==EOF_CHAR)
				{
					uponEOF();
					_returnToken = makeToken(ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE);
				}
				else {throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			}
			if ( !_returnToken )
				goto tryAgain; // found SKIP token

			_ttype = _returnToken->getType();
			_ttype = testLiteralsTable(_ttype);
			_returnToken->setType(_ttype);
			return _returnToken;
		}
		catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& e) {
			{
				reportError(e);
				consume();
			}
		}
		catch (ANTLR_USE_NAMESPACE(antlr)CharStreamIOException& csie) {
			throw ANTLR_USE_NAMESPACE(antlr)TokenStreamIOException(csie.io);
		}
		catch (ANTLR_USE_NAMESPACE(antlr)CharStreamException& cse) {
			throw ANTLR_USE_NAMESPACE(antlr)TokenStreamException(cse.getMessage());
		}
tryAgain:;
	}
}

void AntlrNotebookLexer::mRBRACK(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = RBRACK;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match(']' /* charlit */ );
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mLBRACK(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = LBRACK;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match('[' /* charlit */ );
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mRCURLY(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = RCURLY;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match('}' /* charlit */ );
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mLCURLY(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = LCURLY;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match('{' /* charlit */ );
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mCOMMA(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = COMMA;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match(',' /* charlit */ );
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mTHICK(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = THICK;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match('`' /* charlit */ );
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_0);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mCOMMENTSTART(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = COMMENTSTART;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match("(*");
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_2);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mCOMMENTEND(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = COMMENTEND;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match("*)");
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mNUMBER(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = NUMBER;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case 0x2d /* '-' */ :
		{
			match('-' /* charlit */ );
			break;
		}
		case 0x2a /* '*' */ :
		case 0x30 /* '0' */ :
		case 0x31 /* '1' */ :
		case 0x32 /* '2' */ :
		case 0x33 /* '3' */ :
		case 0x34 /* '4' */ :
		case 0x35 /* '5' */ :
		case 0x36 /* '6' */ :
		case 0x37 /* '7' */ :
		case 0x38 /* '8' */ :
		case 0x39 /* '9' */ :
		case 0x5e /* '^' */ :
		case 0x60 /* '`' */ :
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
		}
		}
		}
		{ // ( ... )+
		int _cnt12=0;
		for (;;) {
			if ((_tokenSet_3.member(LA(1))) && (true) && (true)) {
				mDIGIT(false);
			}
			else {
				if ( _cnt12>=1 ) { goto _loop12; } else {throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			
			_cnt12++;
		}
		_loop12:;
		}  // ( ... )+
		{
		if ((LA(1) == 0x2e /* '.' */ )) {
			match('.' /* charlit */ );
			{ // ( ... )+
			int _cnt15=0;
			for (;;) {
				if ((_tokenSet_3.member(LA(1))) && (true) && (true)) {
					mDIGIT(false);
				}
				else {
					if ( _cnt15>=1 ) { goto _loop15; } else {throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
				}
				
				_cnt15++;
			}
			_loop15:;
			}  // ( ... )+
		}
		else {
		}
		
		}
		{
		if ((LA(1) == 0x45 /* 'E' */  || LA(1) == 0x60 /* '`' */  || LA(1) == 0x65 /* 'e' */ )) {
			mEXP(false);
		}
		else {
		}
		
		}
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mDIGIT(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = DIGIT;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		switch ( LA(1)) {
		case 0x30 /* '0' */ :
		case 0x31 /* '1' */ :
		case 0x32 /* '2' */ :
		case 0x33 /* '3' */ :
		case 0x34 /* '4' */ :
		case 0x35 /* '5' */ :
		case 0x36 /* '6' */ :
		case 0x37 /* '7' */ :
		case 0x38 /* '8' */ :
		case 0x39 /* '9' */ :
		{
			matchRange('0','9');
			break;
		}
		case 0x60 /* '`' */ :
		{
			match('`' /* charlit */ );
			break;
		}
		case 0x2a /* '*' */ :
		{
			match('*' /* charlit */ );
			break;
		}
		case 0x5e /* '^' */ :
		{
			match('^' /* charlit */ );
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
		}
		}
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_4);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mEXP(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = EXP;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		switch ( LA(1)) {
		case 0x45 /* 'E' */ :
		case 0x65 /* 'e' */ :
		{
			{
			switch ( LA(1)) {
			case 0x65 /* 'e' */ :
			{
				match('e' /* charlit */ );
				break;
			}
			case 0x45 /* 'E' */ :
			{
				match('E' /* charlit */ );
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
			}
			}
			}
			mNUMBER(false);
			break;
		}
		case 0x60 /* '`' */ :
		{
			{
			mTHICK(false);
			{
			if ((LA(1) == 0x60 /* '`' */ ) && (true) && (true)) {
				mTHICK(false);
			}
			else {
			}
			
			}
			{
			if ((_tokenSet_0.member(LA(1)))) {
				mNUMBER(false);
			}
			else {
			}
			
			}
			}
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
		}
		}
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mID(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = ID;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		{ // ( ... )+
		int _cnt19=0;
		for (;;) {
			switch ( LA(1)) {
			case 0x61 /* 'a' */ :
			case 0x62 /* 'b' */ :
			case 0x63 /* 'c' */ :
			case 0x64 /* 'd' */ :
			case 0x65 /* 'e' */ :
			case 0x66 /* 'f' */ :
			case 0x67 /* 'g' */ :
			case 0x68 /* 'h' */ :
			case 0x69 /* 'i' */ :
			case 0x6a /* 'j' */ :
			case 0x6b /* 'k' */ :
			case 0x6c /* 'l' */ :
			case 0x6d /* 'm' */ :
			case 0x6e /* 'n' */ :
			case 0x6f /* 'o' */ :
			case 0x70 /* 'p' */ :
			case 0x71 /* 'q' */ :
			case 0x72 /* 'r' */ :
			case 0x73 /* 's' */ :
			case 0x74 /* 't' */ :
			case 0x75 /* 'u' */ :
			case 0x76 /* 'v' */ :
			case 0x77 /* 'w' */ :
			case 0x78 /* 'x' */ :
			case 0x79 /* 'y' */ :
			case 0x7a /* 'z' */ :
			{
				matchRange('a','z');
				break;
			}
			case 0x41 /* 'A' */ :
			case 0x42 /* 'B' */ :
			case 0x43 /* 'C' */ :
			case 0x44 /* 'D' */ :
			case 0x45 /* 'E' */ :
			case 0x46 /* 'F' */ :
			case 0x47 /* 'G' */ :
			case 0x48 /* 'H' */ :
			case 0x49 /* 'I' */ :
			case 0x4a /* 'J' */ :
			case 0x4b /* 'K' */ :
			case 0x4c /* 'L' */ :
			case 0x4d /* 'M' */ :
			case 0x4e /* 'N' */ :
			case 0x4f /* 'O' */ :
			case 0x50 /* 'P' */ :
			case 0x51 /* 'Q' */ :
			case 0x52 /* 'R' */ :
			case 0x53 /* 'S' */ :
			case 0x54 /* 'T' */ :
			case 0x55 /* 'U' */ :
			case 0x56 /* 'V' */ :
			case 0x57 /* 'W' */ :
			case 0x58 /* 'X' */ :
			case 0x59 /* 'Y' */ :
			case 0x5a /* 'Z' */ :
			{
				matchRange('A','Z');
				break;
			}
			default:
			{
				if ( _cnt19>=1 ) { goto _loop19; } else {throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			}
			_cnt19++;
		}
		_loop19:;
		}  // ( ... )+
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mQSTRING(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = QSTRING;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		match('\"' /* charlit */ );
		{ // ( ... )*
		for (;;) {
			switch ( LA(1)) {
			case 0xa /* '\n' */ :
			case 0xd /* '\r' */ :
			{
				{
				switch ( LA(1)) {
				case 0xd /* '\r' */ :
				{
					match('\r' /* charlit */ );
					break;
				}
				case 0xa /* '\n' */ :
				{
					match('\n' /* charlit */ );
					break;
				}
				default:
				{
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
				}
				}
				}
				newline();
				break;
			}
			case 0x0 /* '\0' */ :
			case 0x1 /* '\1' */ :
			case 0x2 /* '\2' */ :
			case 0x3 /* '\3' */ :
			case 0x4 /* '\4' */ :
			case 0x5 /* '\5' */ :
			case 0x6 /* '\6' */ :
			case 0x7 /* '\7' */ :
			case 0x8 /* '\10' */ :
			case 0x9 /* '\t' */ :
			case 0xb /* '\13' */ :
			case 0xc /* '\14' */ :
			case 0xe /* '\16' */ :
			case 0xf /* '\17' */ :
			case 0x10 /* '\20' */ :
			case 0x11 /* '\21' */ :
			case 0x12 /* '\22' */ :
			case 0x13 /* '\23' */ :
			case 0x14 /* '\24' */ :
			case 0x15 /* '\25' */ :
			case 0x16 /* '\26' */ :
			case 0x17 /* '\27' */ :
			case 0x18 /* '\30' */ :
			case 0x19 /* '\31' */ :
			case 0x1a /* '\32' */ :
			case 0x1b /* '\33' */ :
			case 0x1c /* '\34' */ :
			case 0x1d /* '\35' */ :
			case 0x1e /* '\36' */ :
			case 0x1f /* '\37' */ :
			case 0x20 /* ' ' */ :
			case 0x21 /* '!' */ :
			case 0x23 /* '#' */ :
			case 0x24 /* '$' */ :
			case 0x25 /* '%' */ :
			case 0x26 /* '&' */ :
			case 0x27 /* '\'' */ :
			case 0x28 /* '(' */ :
			case 0x29 /* ')' */ :
			case 0x2a /* '*' */ :
			case 0x2b /* '+' */ :
			case 0x2c /* ',' */ :
			case 0x2d /* '-' */ :
			case 0x2e /* '.' */ :
			case 0x2f /* '/' */ :
			case 0x30 /* '0' */ :
			case 0x31 /* '1' */ :
			case 0x32 /* '2' */ :
			case 0x33 /* '3' */ :
			case 0x34 /* '4' */ :
			case 0x35 /* '5' */ :
			case 0x36 /* '6' */ :
			case 0x37 /* '7' */ :
			case 0x38 /* '8' */ :
			case 0x39 /* '9' */ :
			case 0x3a /* ':' */ :
			case 0x3b /* ';' */ :
			case 0x3c /* '<' */ :
			case 0x3d /* '=' */ :
			case 0x3e /* '>' */ :
			case 0x3f /* '?' */ :
			case 0x40 /* '@' */ :
			case 0x41 /* 'A' */ :
			case 0x42 /* 'B' */ :
			case 0x43 /* 'C' */ :
			case 0x44 /* 'D' */ :
			case 0x45 /* 'E' */ :
			case 0x46 /* 'F' */ :
			case 0x47 /* 'G' */ :
			case 0x48 /* 'H' */ :
			case 0x49 /* 'I' */ :
			case 0x4a /* 'J' */ :
			case 0x4b /* 'K' */ :
			case 0x4c /* 'L' */ :
			case 0x4d /* 'M' */ :
			case 0x4e /* 'N' */ :
			case 0x4f /* 'O' */ :
			case 0x50 /* 'P' */ :
			case 0x51 /* 'Q' */ :
			case 0x52 /* 'R' */ :
			case 0x53 /* 'S' */ :
			case 0x54 /* 'T' */ :
			case 0x55 /* 'U' */ :
			case 0x56 /* 'V' */ :
			case 0x57 /* 'W' */ :
			case 0x58 /* 'X' */ :
			case 0x59 /* 'Y' */ :
			case 0x5a /* 'Z' */ :
			case 0x5b /* '[' */ :
			case 0x5d /* ']' */ :
			case 0x5e /* '^' */ :
			case 0x5f /* '_' */ :
			case 0x60 /* '`' */ :
			case 0x61 /* 'a' */ :
			case 0x62 /* 'b' */ :
			case 0x63 /* 'c' */ :
			case 0x64 /* 'd' */ :
			case 0x65 /* 'e' */ :
			case 0x66 /* 'f' */ :
			case 0x67 /* 'g' */ :
			case 0x68 /* 'h' */ :
			case 0x69 /* 'i' */ :
			case 0x6a /* 'j' */ :
			case 0x6b /* 'k' */ :
			case 0x6c /* 'l' */ :
			case 0x6d /* 'm' */ :
			case 0x6e /* 'n' */ :
			case 0x6f /* 'o' */ :
			case 0x70 /* 'p' */ :
			case 0x71 /* 'q' */ :
			case 0x72 /* 'r' */ :
			case 0x73 /* 's' */ :
			case 0x74 /* 't' */ :
			case 0x75 /* 'u' */ :
			case 0x76 /* 'v' */ :
			case 0x77 /* 'w' */ :
			case 0x78 /* 'x' */ :
			case 0x79 /* 'y' */ :
			case 0x7a /* 'z' */ :
			case 0x7b /* '{' */ :
			case 0x7c /* '|' */ :
			case 0x7d /* '}' */ :
			case 0x7e /* '~' */ :
			case 0x7f:
			{
				{
				match(_tokenSet_5);
				}
				break;
			}
			default:
				if ((LA(1) == 0x5c /* '\\' */ ) && (LA(2) == 0x22 /* '\"' */ ) && ((LA(3) >= 0x0 /* '\0' */  && LA(3) <= 0x7f))) {
					match('\\' /* charlit */ );
					match('\"' /* charlit */ );
				}
				else if (((LA(1) == 0x5c /* '\\' */ ) && ((LA(2) >= 0x0 /* '\0' */  && LA(2) <= 0x7f)) && (true))&&(LA(2) != '"')) {
					match('\\' /* charlit */ );
				}
			else {
				goto _loop30;
			}
			}
		}
		_loop30:;
		} // ( ... )*
		match('\"' /* charlit */ );
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mWHITESPACE(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = WHITESPACE;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case 0x20 /* ' ' */ :
		{
			match(' ' /* charlit */ );
			break;
		}
		case 0x9 /* '\t' */ :
		{
			match('\t' /* charlit */ );
			break;
		}
		case 0xa /* '\n' */ :
		case 0xd /* '\r' */ :
		{
			{
			if ((LA(1) == 0xd /* '\r' */ ) && (LA(2) == 0xa /* '\n' */ )) {
				match("\r\n");
			}
			else if ((LA(1) == 0xd /* '\r' */ ) && (true)) {
				match('\r' /* charlit */ );
			}
			else if ((LA(1) == 0xa /* '\n' */ )) {
				match('\n' /* charlit */ );
			}
			else {
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
			}
			
			}
			newline();
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
		}
		}
		}
		_ttype = ANTLR_USE_NAMESPACE(antlr)Token::SKIP;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void AntlrNotebookLexer::mCOMMENT(bool _createToken) {
	int _ttype; ANTLR_USE_NAMESPACE(antlr)RefToken _token; ANTLR_USE_NAMESPACE(std)string::size_type _begin = text.length();
	_ttype = COMMENT;
	ANTLR_USE_NAMESPACE(std)string::size_type _saveIndex;
	
	try {      // for error handling
		mCOMMENTSTART(false);
		{ // ( ... )*
		for (;;) {
			switch ( LA(1)) {
			case 0xa /* '\n' */ :
			case 0xd /* '\r' */ :
			{
				{
				switch ( LA(1)) {
				case 0xd /* '\r' */ :
				{
					match('\r' /* charlit */ );
					break;
				}
				case 0xa /* '\n' */ :
				{
					match('\n' /* charlit */ );
					break;
				}
				default:
				{
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
				}
				}
				}
				newline();
				break;
			}
			case 0x0 /* '\0' */ :
			case 0x1 /* '\1' */ :
			case 0x2 /* '\2' */ :
			case 0x3 /* '\3' */ :
			case 0x4 /* '\4' */ :
			case 0x5 /* '\5' */ :
			case 0x6 /* '\6' */ :
			case 0x7 /* '\7' */ :
			case 0x8 /* '\10' */ :
			case 0x9 /* '\t' */ :
			case 0xb /* '\13' */ :
			case 0xc /* '\14' */ :
			case 0xe /* '\16' */ :
			case 0xf /* '\17' */ :
			case 0x10 /* '\20' */ :
			case 0x11 /* '\21' */ :
			case 0x12 /* '\22' */ :
			case 0x13 /* '\23' */ :
			case 0x14 /* '\24' */ :
			case 0x15 /* '\25' */ :
			case 0x16 /* '\26' */ :
			case 0x17 /* '\27' */ :
			case 0x18 /* '\30' */ :
			case 0x19 /* '\31' */ :
			case 0x1a /* '\32' */ :
			case 0x1b /* '\33' */ :
			case 0x1c /* '\34' */ :
			case 0x1d /* '\35' */ :
			case 0x1e /* '\36' */ :
			case 0x1f /* '\37' */ :
			case 0x20 /* ' ' */ :
			case 0x21 /* '!' */ :
			case 0x22 /* '\"' */ :
			case 0x23 /* '#' */ :
			case 0x24 /* '$' */ :
			case 0x25 /* '%' */ :
			case 0x26 /* '&' */ :
			case 0x27 /* '\'' */ :
			case 0x28 /* '(' */ :
			case 0x29 /* ')' */ :
			case 0x2b /* '+' */ :
			case 0x2c /* ',' */ :
			case 0x2d /* '-' */ :
			case 0x2e /* '.' */ :
			case 0x2f /* '/' */ :
			case 0x30 /* '0' */ :
			case 0x31 /* '1' */ :
			case 0x32 /* '2' */ :
			case 0x33 /* '3' */ :
			case 0x34 /* '4' */ :
			case 0x35 /* '5' */ :
			case 0x36 /* '6' */ :
			case 0x37 /* '7' */ :
			case 0x38 /* '8' */ :
			case 0x39 /* '9' */ :
			case 0x3a /* ':' */ :
			case 0x3b /* ';' */ :
			case 0x3c /* '<' */ :
			case 0x3d /* '=' */ :
			case 0x3e /* '>' */ :
			case 0x3f /* '?' */ :
			case 0x40 /* '@' */ :
			case 0x41 /* 'A' */ :
			case 0x42 /* 'B' */ :
			case 0x43 /* 'C' */ :
			case 0x44 /* 'D' */ :
			case 0x45 /* 'E' */ :
			case 0x46 /* 'F' */ :
			case 0x47 /* 'G' */ :
			case 0x48 /* 'H' */ :
			case 0x49 /* 'I' */ :
			case 0x4a /* 'J' */ :
			case 0x4b /* 'K' */ :
			case 0x4c /* 'L' */ :
			case 0x4d /* 'M' */ :
			case 0x4e /* 'N' */ :
			case 0x4f /* 'O' */ :
			case 0x50 /* 'P' */ :
			case 0x51 /* 'Q' */ :
			case 0x52 /* 'R' */ :
			case 0x53 /* 'S' */ :
			case 0x54 /* 'T' */ :
			case 0x55 /* 'U' */ :
			case 0x56 /* 'V' */ :
			case 0x57 /* 'W' */ :
			case 0x58 /* 'X' */ :
			case 0x59 /* 'Y' */ :
			case 0x5a /* 'Z' */ :
			case 0x5b /* '[' */ :
			case 0x5c /* '\\' */ :
			case 0x5d /* ']' */ :
			case 0x5e /* '^' */ :
			case 0x5f /* '_' */ :
			case 0x60 /* '`' */ :
			case 0x61 /* 'a' */ :
			case 0x62 /* 'b' */ :
			case 0x63 /* 'c' */ :
			case 0x64 /* 'd' */ :
			case 0x65 /* 'e' */ :
			case 0x66 /* 'f' */ :
			case 0x67 /* 'g' */ :
			case 0x68 /* 'h' */ :
			case 0x69 /* 'i' */ :
			case 0x6a /* 'j' */ :
			case 0x6b /* 'k' */ :
			case 0x6c /* 'l' */ :
			case 0x6d /* 'm' */ :
			case 0x6e /* 'n' */ :
			case 0x6f /* 'o' */ :
			case 0x70 /* 'p' */ :
			case 0x71 /* 'q' */ :
			case 0x72 /* 'r' */ :
			case 0x73 /* 's' */ :
			case 0x74 /* 't' */ :
			case 0x75 /* 'u' */ :
			case 0x76 /* 'v' */ :
			case 0x77 /* 'w' */ :
			case 0x78 /* 'x' */ :
			case 0x79 /* 'y' */ :
			case 0x7a /* 'z' */ :
			case 0x7b /* '{' */ :
			case 0x7c /* '|' */ :
			case 0x7d /* '}' */ :
			case 0x7e /* '~' */ :
			case 0x7f:
			{
				{
				match(_tokenSet_6);
				}
				break;
			}
			default:
				if (((LA(1) == 0x2a /* '*' */ ) && ((LA(2) >= 0x0 /* '\0' */  && LA(2) <= 0x7f)) && ((LA(3) >= 0x0 /* '\0' */  && LA(3) <= 0x7f)))&&(LA(2) != ')')) {
					match('*' /* charlit */ );
				}
			else {
				goto _loop38;
			}
			}
		}
		_loop38:;
		} // ( ... )*
		mCOMMENTEND(false);
		_ttype = ANTLR_USE_NAMESPACE(antlr)Token::SKIP;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		reportError(ex);
		recover(ex,_tokenSet_1);
	}
	if ( _createToken && _token==ANTLR_USE_NAMESPACE(antlr)nullToken && _ttype!=ANTLR_USE_NAMESPACE(antlr)Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}


const unsigned long AntlrNotebookLexer::_tokenSet_0_data_[] = { 0UL, 67052544UL, 1073741824UL, 1UL, 0UL, 0UL, 0UL, 0UL };
// * - 0 1 2 3 4 5 6 7 8 9 ^ ` 
const ANTLR_USE_NAMESPACE(antlr)BitSet AntlrNotebookLexer::_tokenSet_0(_tokenSet_0_data_,8);
const unsigned long AntlrNotebookLexer::_tokenSet_1_data_[] = { 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
const ANTLR_USE_NAMESPACE(antlr)BitSet AntlrNotebookLexer::_tokenSet_1(_tokenSet_1_data_,6);
const unsigned long AntlrNotebookLexer::_tokenSet_2_data_[] = { 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL };
// 0x0 0x1 0x2 0x3 0x4 0x5 0x6 0x7 0x8 0x9 0xa 0xb 0xc 0xd 0xe 0xf 0x10 
// 0x11 0x12 0x13 0x14 0x15 0x16 0x17 0x18 0x19 0x1a 0x1b 0x1c 0x1d 0x1e 
// 0x1f   ! \" # $ % & \' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > 
// ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ 0x5c ] ^ _ 
// ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~ 0x7f 
const ANTLR_USE_NAMESPACE(antlr)BitSet AntlrNotebookLexer::_tokenSet_2(_tokenSet_2_data_,8);
const unsigned long AntlrNotebookLexer::_tokenSet_3_data_[] = { 0UL, 67044352UL, 1073741824UL, 1UL, 0UL, 0UL, 0UL, 0UL };
// * 0 1 2 3 4 5 6 7 8 9 ^ ` 
const ANTLR_USE_NAMESPACE(antlr)BitSet AntlrNotebookLexer::_tokenSet_3(_tokenSet_3_data_,8);
const unsigned long AntlrNotebookLexer::_tokenSet_4_data_[] = { 0UL, 67060736UL, 1073741856UL, 33UL, 0UL, 0UL, 0UL, 0UL };
// * . 0 1 2 3 4 5 6 7 8 9 E ^ ` e 
const ANTLR_USE_NAMESPACE(antlr)BitSet AntlrNotebookLexer::_tokenSet_4(_tokenSet_4_data_,8);
const unsigned long AntlrNotebookLexer::_tokenSet_5_data_[] = { 4294958079UL, 4294967291UL, 4026531839UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL };
// 0x0 0x1 0x2 0x3 0x4 0x5 0x6 0x7 0x8 0x9 0xb 0xc 0xe 0xf 0x10 0x11 0x12 
// 0x13 0x14 0x15 0x16 0x17 0x18 0x19 0x1a 0x1b 0x1c 0x1d 0x1e 0x1f   ! 
// # $ % & \' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D 
// E F G H I J K L M N O P Q R S T U V W X Y Z [ ] ^ _ ` a b c d e f g 
// h i j k l m n o p q r s t u v w x y z { | } ~ 0x7f 
const ANTLR_USE_NAMESPACE(antlr)BitSet AntlrNotebookLexer::_tokenSet_5(_tokenSet_5_data_,8);
const unsigned long AntlrNotebookLexer::_tokenSet_6_data_[] = { 4294958079UL, 4294966271UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL };
// 0x0 0x1 0x2 0x3 0x4 0x5 0x6 0x7 0x8 0x9 0xb 0xc 0xe 0xf 0x10 0x11 0x12 
// 0x13 0x14 0x15 0x16 0x17 0x18 0x19 0x1a 0x1b 0x1c 0x1d 0x1e 0x1f   ! 
// \" # $ % & \' ( ) + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C 
// D E F G H I J K L M N O P Q R S T U V W X Y Z [ 0x5c ] ^ _ ` a b c d 
// e f g h i j k l m n o p q r s t u v w x y z { | } ~ 0x7f 
const ANTLR_USE_NAMESPACE(antlr)BitSet AntlrNotebookLexer::_tokenSet_6(_tokenSet_6_data_,8);

