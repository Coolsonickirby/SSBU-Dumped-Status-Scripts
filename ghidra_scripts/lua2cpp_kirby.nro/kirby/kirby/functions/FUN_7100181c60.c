
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100181c60(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0x10c2ff9b0d);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_FLOAT_CHARGE_COUNT);
    fVar5 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__add_float_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar5,iVar2);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_FLOAT_CHARGE_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::operator=(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack160,0x1a535e36ac);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    FUN_710017f560(aLStack176,param_2);
    lib::L2CValue::operator*(aLStack128,aLStack176);
    lib::L2CValue::operator=(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_STATUS_SPECIAL_N_FLAG_CHARGE_MAX);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

