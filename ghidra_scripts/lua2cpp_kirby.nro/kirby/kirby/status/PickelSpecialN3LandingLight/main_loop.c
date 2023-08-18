
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3LandingLight_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  ulong uVar9;
  float fVar10;
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
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    goto LAB_7100120e84;
  }
  FUN_7100121720(this);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack96,HVar8);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
    iVar5 = lib::L2CValue::as_integer(aLStack144);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xaf5156bf9);
      FUN_7100121cb0(aLStack96,this,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_HAMMER);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar4 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
LAB_7100120df4:
          lib::L2CValue::_L2CValue(aLStack128);
          pLVar6 = aLStack144;
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_GENESISSET);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar4 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar7 = lib::L2CValue::operator__(aLStack160,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack176);
            goto LAB_7100120df4;
          }
          iVar5 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
          lib::L2CValue::L2CValue(aLStack192,iVar5);
          lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_ASSIST);
          uVar7 = lib::L2CValue::operator__(aLStack192,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar7 & 1) != 0) goto LAB_7100120e04;
          lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump_mini_attack(this);
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_7100121260;
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_LANDING_LIGHT);
          FUN_7100121de0(aLStack80,this);
          lib::L2CValue::_L2CValue(aLStack128);
          lua2cpp::L2CFighterCommon::sub_landing_uniq_check_strans(this);
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lib::L2CValue::_L2CValue(aLStack80);
            goto LAB_7100121260;
          }
          lib::L2CValue::L2CValue(aLStack144,aLStack80);
          FUN_71001220c0(this,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          pLVar6 = aLStack80;
        }
        lib::L2CValue::_L2CValue(pLVar6);
      }
LAB_7100120e04:
      lVar2 = -0x50;
      goto LAB_7100120e08;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x60;
LAB_7100120e08:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_LANDING_LIGHT);
  FUN_7100122310(aLStack96,this,aLStack160);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar7 & 1) != 0) {
LAB_7100120e84:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  FUN_7100123000(aLStack80,this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) goto LAB_7100120e84;
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar5 = lib::L2CValue::as_integer(aLStack192);
  HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack176,HVar8);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar7 = lib::L2CValue::operator__(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0xaf5156bf9);
    FUN_7100121cb0(aLStack80,this,aLStack176);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      goto LAB_7100120f98;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack96,aLStack80);
LAB_7100120f98:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_INSTANCE_WORK_ID_FLAG_HAMMER);
    iVar5 = lib::L2CValue::as_integer(aLStack208);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INSTANCE_WORK_ID_FLAG_GENESISSET);
      iVar5 = lib::L2CValue::as_integer(aLStack240);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar4 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack224,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        iVar5 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue(aLStack256,iVar5);
        lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_ASSIST);
        uVar7 = lib::L2CValue::operator__(aLStack256,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
          iVar5 = lib::L2CValue::as_integer(aLStack192);
          bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack192);
          if ((bVar3 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_command_walk(this);
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((bVar3 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WALK);
              lib::L2CValue::L2CValue(aLStack192,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x40);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_7100121260;
            }
            pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
            fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack208,fVar10);
            lib::L2CValue::operator_(aLStack208);
            lib::L2CValue::operator_(pLVar6,aLStack192);
            lib::L2CValue::L2CValue(aLStack240,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack256,0xcf44ba9e5);
            uVar7 = lib::L2CValue::as_integer(aLStack240);
            uVar9 = lib::L2CValue::as_integer(aLStack256);
            fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar7,uVar9);
            lib::L2CValue::L2CValue(aLStack224,fVar10);
            uVar7 = lib::L2CValue::operator__(aLStack224,aLStack80);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack208);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WALK_BACK);
              lib::L2CValue::L2CValue(aLStack192,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x40);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_7100121260;
            }
          }
        }
        goto LAB_71001211b0;
      }
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
  }
LAB_71001211b0:
  bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
              (this,(L2CValue)(cVar1 + -0x40));
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_71001232d0(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WAIT);
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_7100121260:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

