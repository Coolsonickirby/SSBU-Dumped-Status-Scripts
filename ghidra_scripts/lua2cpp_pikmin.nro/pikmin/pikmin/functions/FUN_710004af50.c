
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004af50(L2CValue *param_1,L2CAgent *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
  float fVar6;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
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
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_CURRENT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_HIDE_INDICATION);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0x27ea3b0e52);
    lib::L2CValue::L2CValue(aLStack160,0xcc40f4e28);
    lib::L2CValue::L2CValue(aLStack176,0x14a96c5752);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_ALL);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    lib::L2CAgent::push_lua_stack(param_2,aLStack192);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::operator!(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    if ((bVar1 & 1U) == 0) {
      bVar2 = 0;
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack240,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_UNABLE_HIDE_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
      lib::L2CValue::operator!(aLStack224);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_HIDE_WAIT);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_710004b2c8;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_BORING_INDICATION);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(this,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack320,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_LANDING);
      lib::L2CValue::L2CValue(aLStack336,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(param_1,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack288,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack304,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(param_1,1);
  }
LAB_710004b2c8:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

