
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ce50(L2CFighterCommon *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100020340();
  lua2cpp::L2CFighterCommon::attack_mtrans_pre_process(param_1);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    this = aLStack96;
  }
  else {
    iVar2 = app::lua_bind::ComboModule__count_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_710001d0c4;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_NEAR_OPPONENT);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x10556e6036);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_ATTACK_WORK_INT_ATTACK11_MOTION);
      lVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(param_1->moduleAccessor,lVar5,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ATTACK_NEAR);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_ATTACK_INT_LOG_KIND);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar2,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xb4f4e6f8f);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_ATTACK_WORK_INT_ATTACK11_MOTION);
      lVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(param_1->moduleAccessor,lVar5,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ATTACK11);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_ATTACK_INT_LOG_KIND);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar2,iVar3);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    this = aLStack80;
  }
  lib::L2CValue::~L2CValue(this);
LAB_710001d0c4:
  lua2cpp::L2CFighterCommon::attack_mtrans_post_process(param_1);
  lib::L2CValue::L2CValue(aLStack80,0x265a5c1b6b);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,param_2);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,param_3);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)param_1,1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_ATTACK_FLAG_WEAK_BRANCH_FRAME_FIRST);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar2 = app::lua_bind::ComboModule__count_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_ATTACK_FLAG_CHANGE_LOG);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

