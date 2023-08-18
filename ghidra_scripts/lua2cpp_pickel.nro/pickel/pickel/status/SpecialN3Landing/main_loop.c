
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN3Landing_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
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
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  FUN_710004d710(this);
  lib::L2CValue::L2CValue(aLStack80,-1);
  lib::L2CValue::L2CValue(aLStack112,true);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  bVar1 = app::lua_bind::FighterMotionModuleImpl__is_valid_cancel_frame_impl
                    (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,HVar6);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0xaf5156bf9);
      FUN_710004dca0(aLStack112,this,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLAG_HAMMER);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
LAB_710005317c:
          lib::L2CValue::_L2CValue(aLStack144);
          pLVar4 = aLStack160;
        }
        else {
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INSTANCE_WORK_ID_FLAG_GENESISSET);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack192);
            goto LAB_710005317c;
          }
          iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
          lib::L2CValue::L2CValue(aLStack208,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_ASSIST);
          uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          }
          else {
            bVar1 = 0;
          }
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar1 & 1) == 0) goto LAB_710005318c;
          lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump_mini_attack(this);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000536f4:
            lib::L2CValue::_L2CValue(aLStack112);
            goto LAB_71000534f0;
          }
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_LANDING);
          FUN_710004ddd0(aLStack80,this);
          lib::L2CValue::_L2CValue(aLStack144);
          lua2cpp::L2CFighterCommon::sub_landing_uniq_check_strans(this);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lib::L2CValue::_L2CValue(aLStack80);
            goto LAB_71000536f4;
          }
          lib::L2CValue::L2CValue(aLStack160,aLStack80);
          FUN_710004e0b0(this,aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
          pLVar4 = aLStack80;
        }
        lib::L2CValue::_L2CValue(pLVar4);
      }
LAB_710005318c:
      pLVar4 = aLStack112;
      goto LAB_7100053190;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar4 = aLStack128;
LAB_7100053190:
    lib::L2CValue::_L2CValue(pLVar4);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_WAIT);
    FUN_710004e300(aLStack112,this,aLStack176);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000534f0;
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) != 0) {
    FUN_710004efa0(aLStack80,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000534f0;
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INSTANCE_WORK_ID_FLAG_HAMMER);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INSTANCE_WORK_ID_FLAG_GENESISSET);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue(aLStack240,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_ASSIST);
        uVar5 = lib::L2CValue::operator__(aLStack240,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_command_walk(this);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_WALK);
              lib::L2CValue::L2CValue(aLStack112,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_71000534f0;
            }
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
            fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack192,fVar8);
            lib::L2CValue::operator_(aLStack192);
            lib::L2CValue::operator_(pLVar4,aLStack112);
            lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack240,0xcf44ba9e5);
            uVar5 = lib::L2CValue::as_integer(aLStack224);
            uVar7 = lib::L2CValue::as_integer(aLStack240);
            fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar5,uVar7);
            lib::L2CValue::L2CValue(aLStack208,fVar8);
            uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack192);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_WALK_BACK);
              lib::L2CValue::L2CValue(aLStack112,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_71000534f0;
            }
          }
        }
        goto LAB_710005343c;
      }
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
  }
LAB_710005343c:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_710004f270(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_WAIT);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_71000534f0:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

