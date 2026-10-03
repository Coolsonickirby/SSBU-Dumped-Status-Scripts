
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100086e40(long param_1)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_ROTATE_X_DEGREE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_ROTATE_Y_DEGREE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),9);
  lib::L2CValue::L2CValue(aLStack112,pLVar3);
  FUN_7100087510(aLStack64,aLStack112);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xb94eed765);
    lib::L2CValue::L2CValue(aLStack144,0x137f17acf6);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator-(aLStack80,aLStack128);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0.0);
        lib::L2CValue::operator=(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator-(aLStack96,aLStack128);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0.0);
        lib::L2CValue::operator=(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
    pLVar3 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0xb94eed765);
    lib::L2CValue::L2CValue(aLStack144,0xf84f1f2b3);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,0xb94eed765);
    lib::L2CValue::L2CValue(aLStack160,0xff3f6c225);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160,0xb94eed765);
    lib::L2CValue::L2CValue(aLStack176,0x137f17acf6);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator+(aLStack80,aLStack144);
      lib::L2CValue::operator=(aLStack80,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator=(aLStack80,aLStack64);
      }
    }
    uVar4 = lib::L2CValue::operator<(aLStack96,aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator+(aLStack96,aLStack144);
      lib::L2CValue::operator=(aLStack96,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      uVar4 = lib::L2CValue::operator<=(aLStack128,aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator=(aLStack96,aLStack128);
      }
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar3 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar3);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_ROTATE_X_DEGREE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_WORK_ID_FLOAT_DRAGON_ROTATE_Y_DEGREE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

