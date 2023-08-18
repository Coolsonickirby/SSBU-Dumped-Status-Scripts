
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BuddySpecialNShootWalkB_main_loop
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
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_71001467f0(aLStack128,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100146cb0(this);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack160,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x60);
      goto LAB_710014bea0;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) goto LAB_710014bddc;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
LAB_710014bddc:
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      FUN_71001479a0(aLStack112,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
        lib::L2CValue::L2CValue(aLStack160,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x60);
LAB_710014bea0:
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
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack176,HVar5);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack192,HVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x2034fd9b5c);
  uVar6 = lib::L2CValue::operator__(aLStack192,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    FUN_7100147290(aLStack112,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014c810;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x2034fd9b5c);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,_CONTROL_PAD_BUTTON_GUARD);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar2 & 1U) == 0) {
        FUN_7100147830(aLStack224,this);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((bVar2 & 1U) == 0) goto LAB_710014c078;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack208);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014c810;
    }
LAB_710014c078:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014c810;
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PASS);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014c810;
    }
    lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014c810;
    }
    lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014c810;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::operator_(aLStack224);
    lib::L2CValue::operator_(pLVar7,aLStack208);
    lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack272,0xcf44ba9e5);
    uVar6 = lib::L2CValue::as_integer(aLStack256);
    uVar8 = lib::L2CValue::as_integer(aLStack272);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710014c810;
    }
  }
  lib::L2CValue::L2CValue(aLStack208,aLStack160);
  FUN_7100147af0(aLStack112,this,aLStack208);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) == 0) {
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,HVar5);
    lib::L2CValue::operator_(aLStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,HVar5);
    lib::L2CValue::operator_(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack112,0x1a82e0f07b);
    uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x2011cd1176);
      uVar6 = lib::L2CValue::operator__(aLStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) goto LAB_710014c7fc;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::operator_(pLVar7,aLStack224);
    lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack272,0xcee0a3848);
    uVar6 = lib::L2CValue::as_integer(aLStack256);
    uVar8 = lib::L2CValue::as_integer(aLStack272);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) != 0) {
      FUN_71001479a0(aLStack112,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
        lib::L2CValue::L2CValue(aLStack224,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710014c810;
      }
    }
  }
  else {
    fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack240,0x1a5c0b8105);
    lib::L2CValue::L2CValue(aLStack256,1.0);
    lib::L2CValue::L2CValue(aLStack272,false);
    lib::L2CValue::L2CValue(aLStack288,false);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    HVar5 = lib::L2CValue::as_hash(aLStack240);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack256);
    bVar1 = lib::L2CValue::as_bool(aLStack272);
    bVar3 = lib::L2CValue::as_bool(aLStack288);
    app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
              (*ppBVar10,iVar4,HVar5,fVar11,fVar12,(bool)(bVar1 & 1),(bool)(bVar3 & 1),0.0,true,true
               ,false);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar9,false);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
  }
LAB_710014c7fc:
  FUN_7100148080(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710014c810:
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

