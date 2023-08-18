
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN1Landing_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
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
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100135a58:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  FUN_710012e5a0(this);
  FUN_7100131dd0(this);
  FUN_7100132080(this);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_LANDING);
  FUN_7100132590(aLStack96,this,aLStack112);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) goto LAB_7100135a58;
  FUN_7100132e60(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) goto LAB_7100135a58;
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,HVar6);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xa1b1b0ad5);
    FUN_71001331b0(aLStack80,this,aLStack128);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      goto LAB_7100135b6c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack96,aLStack80);
LAB_7100135b6c:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLAG_HAMMER);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INSTANCE_WORK_ID_FLAG_GENESISSET);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue(aLStack208,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_ASSIST);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar2 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_command_walk(this);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_WALK);
              lib::L2CValue::L2CValue(aLStack144,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_7100135e34;
            }
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
            fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack160,fVar8);
            lib::L2CValue::operator_(aLStack160);
            lib::L2CValue::operator_(pLVar4,aLStack144);
            lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack208,0xcf44ba9e5);
            uVar5 = lib::L2CValue::as_integer(aLStack192);
            uVar7 = lib::L2CValue::as_integer(aLStack208);
            fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar5,uVar7);
            lib::L2CValue::L2CValue(aLStack176,fVar8);
            uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_WALK_BACK);
              lib::L2CValue::L2CValue(aLStack144,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_7100135e34;
            }
          }
        }
        goto LAB_7100135d84;
      }
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
  }
LAB_7100135d84:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_71001332e0(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_WAIT);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_7100135e34:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

