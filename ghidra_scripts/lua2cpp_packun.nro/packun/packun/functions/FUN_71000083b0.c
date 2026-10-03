
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000083b0(long param_1)

{
  int iVar1;
  L2CValue *this;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack112,0xf7c874336);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    FUN_7100007e30(aLStack64,param_1);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar2 = lib::L2CValue::operator<(aLStack112,aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::operator+(aLStack80,aLStack96);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      uVar2 = lib::L2CValue::operator<=(aLStack112,aLStack80);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::operator=(aLStack80,aLStack112);
      }
    }
    else {
      lib::L2CValue::operator-(aLStack80,aLStack96);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack112);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::operator=(aLStack80,aLStack112);
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator+(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    fVar4 = (float)lib::L2CValue::as_number(aLStack128);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

