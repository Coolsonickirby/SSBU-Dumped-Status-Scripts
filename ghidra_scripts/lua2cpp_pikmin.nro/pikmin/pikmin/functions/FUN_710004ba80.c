
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004ba80(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue
            (aLStack160,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_HI_DISABLE_AIR_FOLLOW
            );
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) goto LAB_710004bfbc;
  lib::L2CValue::L2CValue
            (aLStack144,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_FOLLOW);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_AUTONOMY);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_DAMAGE_FLY);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if (((uVar4 & 1) != 0) &&
     (bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112), (bVar2 & 1U) != 0)) {
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_AIR_FOLLOW);
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(param_1,1);
    goto LAB_710004c104;
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::operator!(aLStack112);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack208,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_CURRENT);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_AIR);
      uVar4 = lib::L2CValue::operator==(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_AIR_FOLLOW);
        lib::L2CValue::L2CValue(aLStack240,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::L2CValue(param_1,1);
        goto LAB_710004c104;
      }
    }
  }
  lib::L2CValue::operator!(aLStack112);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = aLStack144;
LAB_710004bfb8:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_AIR);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xcc40f4e28);
      lib::L2CValue::L2CValue(aLStack160,0x14a96c5752);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack160,0x289a9c79db);
      lib::L2CValue::L2CValue(aLStack208,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_X);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack208);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::operator!(aLStack144);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack208);
        pLVar5 = aLStack160;
        goto LAB_710004bfb8;
      }
      lib::L2CValue::L2CValue(aLStack272,0x289a9c79db);
      lib::L2CValue::L2CValue(aLStack288,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_UP);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack272);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack288);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack256);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack304,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_AIR_FOLLOW);
        lib::L2CValue::L2CValue(aLStack320,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::L2CValue(param_1,1);
        goto LAB_710004c104;
      }
    }
  }
LAB_710004bfbc:
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack160,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_CURRENT);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_BORING_INDICATION);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack368,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_BORING_WAIT);
      lib::L2CValue::L2CValue(aLStack384,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::L2CValue(param_1,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack336,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack352,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::L2CValue(param_1,1);
  }
LAB_710004c104:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

