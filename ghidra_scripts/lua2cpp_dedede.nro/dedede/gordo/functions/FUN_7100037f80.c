
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100037f80(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_GORDO_STATUS_WORK_INT_DEAD_REMOVE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_DEAD_STAY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_STATUS_WORK_INT_DEAD_REMOVE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x25e7afdbfa);
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::L2CValue(aLStack96,0x4ed254924);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar5 = lib::L2CValue::as_hash(aLStack96);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_2->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_STATUS_WORK_INT_DEAD_REMOVE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x27936db96d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

