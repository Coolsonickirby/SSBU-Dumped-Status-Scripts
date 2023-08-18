
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BuddySpecialNShootWalkF_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Fighter *pFVar9;
  float fVar10;
  float fVar11;
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
  
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_71001467f0(aLStack128,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100146cb0(this);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack160,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x60);
      goto LAB_710014ce6c;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) goto LAB_710014cda8;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
LAB_710014cda8:
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      FUN_71001479a0(aLStack112,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
        lib::L2CValue::L2CValue(aLStack160,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x60);
LAB_710014ce6c:
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack176,HVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x2034fd9b5c);
  uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    FUN_7100147290(aLStack112,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014d5b4;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x2034fd9b5c);
    uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_GUARD);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar2 & 1U) == 0) {
        FUN_7100147830(aLStack208,this);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((bVar2 & 1U) == 0) goto LAB_710014d030;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014d5b4;
    }
LAB_710014d030:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014d5b4;
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PASS);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014d5b4;
    }
    lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710014d5b4;
    }
    lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014d5b4;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::operator_(pLVar7,aLStack192);
    lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack240,0xcf44ba9e5);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack208,fVar10);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014d5b4;
    }
  }
  lib::L2CValue::L2CValue(aLStack192,aLStack160);
  FUN_7100147af0(aLStack112,this,aLStack192);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) != 0) {
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack224,0x1a5c0b8105);
    lib::L2CValue::L2CValue(aLStack240,1.0);
    lib::L2CValue::L2CValue(aLStack256,false);
    lib::L2CValue::L2CValue(aLStack272,false);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    HVar5 = lib::L2CValue::as_hash(aLStack224);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack240);
    bVar1 = lib::L2CValue::as_bool(aLStack256);
    bVar3 = lib::L2CValue::as_bool(aLStack272);
    app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
              (this->moduleAccessor,iVar4,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar3 & 1),
               0.0,true,true,false);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar9,false);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  FUN_7100148080(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710014d5b4:
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

