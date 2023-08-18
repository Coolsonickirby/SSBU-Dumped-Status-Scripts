
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3Wait_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
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
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    goto LAB_710012cc3c;
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
        lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump_mini_attack(this);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710012ce34:
          lib::L2CValue::_L2CValue(aLStack96);
          return;
        }
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_WAIT);
        FUN_7100121de0(aLStack80,this);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack160,false);
        lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack80);
          goto LAB_710012ce34;
        }
        lib::L2CValue::L2CValue(aLStack144,aLStack80);
        FUN_71001220c0(this,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lVar2 = -0x50;
      goto LAB_710012ce6c;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x60;
LAB_710012ce6c:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_WAIT);
  FUN_7100122310(aLStack96,this,aLStack176);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar7 & 1) != 0) goto LAB_710012d180;
  FUN_7100123000(aLStack80,this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) goto LAB_710012d180;
  FUN_710012c130(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) goto LAB_710012d180;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    lua2cpp::L2CFighterCommon::sub_check_command_walk(this);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WALK);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
LAB_710012cc3c:
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      goto LAB_710012d180;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::operator_(aLStack192);
    lib::L2CValue::operator_(pLVar6,aLStack96);
    lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack240,0xcf44ba9e5);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    uVar9 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack208,fVar10);
    uVar7 = lib::L2CValue::operator__(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar7 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack192,0xd87461d6d);
      uVar7 = lib::L2CValue::as_integer(aLStack96);
      uVar9 = lib::L2CValue::as_integer(aLStack192);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      uVar7 = lib::L2CValue::operator_(aLStack80,pLVar6);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WALK_BACK);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        goto LAB_710012cc3c;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
            (this,(L2CValue)(cVar1 + -0x40));
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_71001232d0(this);
LAB_710012d180:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

