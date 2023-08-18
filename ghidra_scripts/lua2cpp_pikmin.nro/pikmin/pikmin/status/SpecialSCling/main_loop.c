
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialSCling_main_loop
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  Hash40 HVar8;
  Hash40 HVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar10 = (float)app::lua_bind::ControlModule__get_clatter_time_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,fVar10);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_WORK_INT_CLATTER_TIME);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar10 = (float)app::lua_bind::ControlModule__get_clatter_time_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_S_CLING_ENEMY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_S_CLING_CARRIER);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_CLING_WORK_FLAG_IS_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0x367b17cdfd);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,3.0);
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_CLING_WORK_FLAG_IS_CONSTRAINT
                    );
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
          lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
          lib::L2CValue::L2CValue
                    (aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_WORK_INT_TARGET_NODE);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack160,lVar7);
          lib::L2CValue::L2CValue
                    (aLStack192,
                     CONSTRAINT_FLAG_POSITION | _CONSTRAINT_FLAG_NO_FLIP |
                     _CONSTRAINT_FLAG_ORIENTATION);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          HVar8 = lib::L2CValue::as_hash(aLStack144);
          HVar9 = lib::L2CValue::as_hash(aLStack160);
          uVar5 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
                    (this->moduleAccessor,iVar3,HVar8,HVar9,uVar5,true);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
        lib::L2CValue::L2CValue(aLStack128,0x23fcecfa97);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar8);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_SPECIAL_S_CLING_REMOVE);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

