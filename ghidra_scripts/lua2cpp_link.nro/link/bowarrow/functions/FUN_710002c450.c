
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002c450(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x2b8a2bd943);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_710002c750;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOWARROW_STATUS_FLY_WORK_FLOAT_ROTATE_Z);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,_WN_LINK_BOWARROW_STATUS_FLY_WORK_FLOAT_ROTATE_SPEED);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack160,fVar4);
  lib::L2CValue::operator+(aLStack112,aLStack160);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack80,360.0);
  uVar3 = lib::L2CValue::operator<(aLStack80,aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,360.0);
    lib::L2CValue::operator-(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator=(aLStack112,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOWARROW_STATUS_FLY_WORK_FLOAT_ROTATE_Z);
  fVar4 = (float)lib::L2CValue::as_number(aLStack160);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_710002c750:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

