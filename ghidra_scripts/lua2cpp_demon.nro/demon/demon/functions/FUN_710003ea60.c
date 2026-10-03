
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003ea60(L2CFighterCommon *param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this;
  float fVar3;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_STATUS_FINAL_INT_FINAL_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator<(aLStack64,aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar2 & 1) == 0) {
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar3);
    lib::L2CValue::L2CValue(aLStack64,-1.0);
    uVar2 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x92ee4d34c);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xdf3b40b09);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xb7be8d394);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xf7eeeef62);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack272,aLStack80);
    lib::L2CValue::L2CValue(aLStack288,aLStack96);
    lib::L2CValue::L2CValue(aLStack304,param_2);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (param_1,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack320,aLStack80);
    lib::L2CValue::L2CValue(aLStack336,aLStack96);
    lib::L2CValue::L2CValue(aLStack352,param_2);
    FUN_710003dd10(param_1,aLStack320,aLStack336,aLStack352);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    this = aLStack320;
  }
  else {
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar3);
    lib::L2CValue::L2CValue(aLStack64,-1.0);
    uVar2 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x5ecd55cc6);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x992785806);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x7c783ffd5);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xb0b14922f);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack160,aLStack80);
    lib::L2CValue::L2CValue(aLStack176,aLStack96);
    lib::L2CValue::L2CValue(aLStack192,param_2);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (param_1,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack208,aLStack80);
    lib::L2CValue::L2CValue(aLStack224,aLStack96);
    lib::L2CValue::L2CValue(aLStack240,param_2);
    FUN_710003dd10(param_1,aLStack208,aLStack224,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    this = aLStack208;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

