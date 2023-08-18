
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYounglink::status::SpecialLwBlast_main_loop
          (L2CFighterYounglink *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  L2CValue *this_01;
  code *pcVar9;
  long *plVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_7100019130:
      this_00 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
LAB_710001923c:
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
            GVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,0x14bf14885c);
            HVar8 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
            iVar4 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
            goto LAB_7100019338;
          }
        }
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_710001923c;
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
        GVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x103ea1071c);
        HVar8 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
LAB_7100019338:
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_BOMB_BLAST);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_BOMB_BLAST);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack96,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x50000000);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          bVar2 = app::sv_battle_object::is_null(uVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            pLVar7 = aLStack112;
          }
          else {
            uVar5 = lib::L2CValue::as_integer(aLStack96);
            bVar2 = app::sv_battle_object::is_active(uVar5);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar1 & 1U) == 0) goto LAB_7100019630;
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_NO_ITEM_TEMPORARY);
            iVar4 = lib::L2CValue::as_integer(aLStack80);
            uVar5 = lib::L2CValue::as_integer(aLStack96);
            bVar2 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar4,uVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            app::LinkEvent::new_l2c_table();
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x105a79305b);
            lib::L2CValue::L2CValue(aLStack80,0x17bf2bbd4c);
            lib::L2CValue::operator_(pLVar7,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
            this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xaa79e68a2);
            lib::L2CValue::operator_(this_01,pLVar7);
            lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LINK_NO_ITEM_TEMPORARY);
            iVar4 = lib::L2CValue::as_integer(aLStack176);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x11f63699bf);
            pcVar9 = (code *)lib::L2CValue::as_pointer(pLVar7);
            plVar10 = (long *)(*pcVar9)();
            app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar10,aLStack144);
            app::lua_bind::LinkModule__send_event_nodes_struct_impl
                      (this->moduleAccessor,iVar4,(LinkEvent *)plVar10,0);
            app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar10);
            lib::L2CValue::L2CValue(aLStack160,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            (**(code **)(*plVar10 + 8))(plVar10);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_NO_ITEM_TEMPORARY);
            iVar4 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::_L2CValue(aLStack80);
            pLVar7 = aLStack144;
          }
          lib::L2CValue::_L2CValue(pLVar7);
        }
LAB_7100019630:
        lib::L2CValue::_L2CValue(aLStack96);
      }
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        goto LAB_710001970c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_7100019130;
      }
    }
    iVar4 = 0;
  }
  else {
LAB_710001970c:
    iVar4 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

