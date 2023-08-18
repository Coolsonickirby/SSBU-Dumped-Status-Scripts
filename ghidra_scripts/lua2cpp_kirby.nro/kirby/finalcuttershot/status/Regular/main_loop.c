
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyFinalcuttershot::status::Regular_main_loop
          (L2CWeaponKirbyFinalcuttershot *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
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
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
LAB_710023b7cc:
    lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    pLVar6 = aLStack80;
    lib::L2CValue::operator_(aLStack96,pLVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar6);
    lib::L2CValue::L2CValue(aLStack80,1e-05);
    uVar7 = lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar7 = lib::L2CValue::operator_(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          goto LAB_710023ba88;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          goto LAB_710023ba88;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) goto LAB_710023ba98;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
LAB_710023ba88:
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
    }
LAB_710023ba98:
    lib::L2CValue::L2CValue(aLStack192,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) goto LAB_710023b7cc;
    lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack192,1);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_710023bb44;
    }
    lib::L2CValue::L2CValue
              (aLStack160,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END
              );
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) goto LAB_710023bb54;
    bVar2 = false;
  }
  else {
LAB_710023bb44:
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710023bb54:
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(aLStack208,bVar2);
  lib::L2CValue::operator_(aLStack208);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
LAB_710023bd98:
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        goto LAB_710023be1c;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack160,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END
              );
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1) == 0) {
      bVar2 = false;
      goto LAB_710023bee4;
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_710023bd98;
LAB_710023be1c:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar2 = true;
LAB_710023bee4:
  lib::L2CValue::L2CValue(aLStack224,bVar2);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    FUN_710023b5a0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

