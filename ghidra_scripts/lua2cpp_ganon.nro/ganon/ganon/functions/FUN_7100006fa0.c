
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006fa0(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this;
  float fVar5;
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
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GANON_STATUS_WORK_ID_INT_EXPLOSION_FALL_SETTING);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator=(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GANON_STATUS_WORK_ID_INT_EXPLOSION_PREV_FALL_SETTING);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack144);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
  if ((uVar3 & 1) != 0) goto LAB_710000737c;
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_EXPLOSION_FALL_SETTING_CATCH);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_EXPLOSION_FALL_SETTING_FALL);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0x16e12a88e7);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack64,fVar5);
      lib::L2CValue::operator=(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0x1470f6b1f3);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack64,fVar5);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack208,aLStack112);
      lib::L2CValue::L2CValue(aLStack224,aLStack96);
      FUN_71000074d0(param_1,aLStack208,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      this = aLStack208;
      goto LAB_710000733c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x1718436a97);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x152dffda16);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack176,aLStack112);
    lib::L2CValue::L2CValue(aLStack192,aLStack96);
    FUN_71000074d0(param_1,aLStack176,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    this = aLStack176;
LAB_710000733c:
    lib::L2CValue::~L2CValue(this);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_STATUS_WORK_ID_INT_EXPLOSION_PREV_FALL_SETTING);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710000737c:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

