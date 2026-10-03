
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000112c0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_7100011508;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_STEPPING);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar5 = aLStack96;
LAB_71000113f8:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_STEPPING_CHECKED);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_STEPPING_CHECKED);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      pLVar5 = aLStack64;
      goto LAB_71000113f8;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_DASH);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_DASH_CHECKED);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_7100011508;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_DASH_CHECKED);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    pLVar5 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_7100011508:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

