
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100036b40(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar5 = aLStack144;
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_HIT);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_MOVE);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_CHANGE_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100036da4;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_ATTACK);
      lib::L2CValue::L2CValue(aLStack96,false);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      pLVar5 = aLStack128;
      goto LAB_7100036d44;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_END);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_7100036da4;
    lib::L2CValue::L2CValue(aLStack144,1);
    FUN_7100036e60(param_1,aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_ATTACK_START);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_7100036da4;
    bVar1 = app::lua_bind::MotionModule__is_end_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) goto LAB_7100036da4;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_MOVE);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    pLVar5 = aLStack112;
LAB_7100036d44:
    lib::L2CValue::~L2CValue(pLVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar5 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_7100036da4:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

