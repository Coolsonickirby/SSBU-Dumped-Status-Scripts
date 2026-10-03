
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010900(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,0xfb6a8b677);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,0x1582d95746);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(param_1,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar2 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar2 = lib::L2CValue::operator<(aLStack64,param_3);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::operator=(aLStack96,aLStack96);
        goto LAB_7100010c08;
      }
      lib::L2CValue::operator-(aLStack96);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar2 = lib::L2CValue::operator<(aLStack64,param_3);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::operator=(aLStack96,aLStack96);
        goto LAB_7100010c08;
      }
      lib::L2CValue::operator-(aLStack96);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar2 = lib::L2CValue::operator<(aLStack64,param_3);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::operator=(aLStack96,aLStack96);
        goto LAB_7100010c08;
      }
      lib::L2CValue::operator-(aLStack96);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar2 = lib::L2CValue::operator<(aLStack64,param_3);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::operator=(aLStack96,aLStack96);
        goto LAB_7100010c08;
      }
      lib::L2CValue::operator-(aLStack96);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100010c08:
  lib::L2CValue::operator+(aLStack80,aLStack96);
  lib::L2CValue::operator/(aLStack128,aLStack80);
  lib::L2CValue::operator*(param_1,aLStack112);
  lib::L2CValue::operator=(param_1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

