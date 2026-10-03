
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004c3a0(L2CValue *param_1,L2CAgent *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack160,0x14a96c5752);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack80,20.0);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,0x289a9c79db);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_X);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack144);
  lib::L2CAgent::push_lua_stack(param_2,aLStack128);
  lib::L2CAgent::push_lua_stack(param_2,aLStack160);
  app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_2,1);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::operator!(aLStack112);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar1 & 1U) == 0) {
LAB_710004c644:
    lib::L2CValue::~L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0x289a9c79db);
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_DOWN);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack192);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      goto LAB_710004c644;
    }
    lua2cpp::L2CFighterBase::sub_situation_passible(param_2);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack208);
    if ((bVar1 & 1U) == 0) {
      uVar4 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,0x32fefcf8dd);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack240);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack224);
      uVar4 = uVar4 & 0xffffffff;
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_PASS);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_710004c778;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack160,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_HI_DISABLE_AIR_FOLLOW
            );
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::operator!(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0x289a9c79db);
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_UP);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack176);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack208,0x289a9c79db);
        lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_DOWN);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack208);
        lib::L2CAgent::push_lua_stack(param_2,aLStack96);
        lib::L2CAgent::push_lua_stack(param_2,aLStack224);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) goto LAB_710004c76c;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack288,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_JUMP);
      lib::L2CValue::L2CValue(aLStack304,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_710004c778;
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
LAB_710004c76c:
  lib::L2CValue::L2CValue(param_1,0);
LAB_710004c778:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

