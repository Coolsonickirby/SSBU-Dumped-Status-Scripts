
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BuddySpecialNShootLanding_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  Fighter *pFVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
  
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_71001467f0(aLStack128,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100146cb0(this);
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
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100146368;
  }
  fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::L2CValue(aLStack224,0xd07d69a9b);
  lib::L2CValue::L2CValue(aLStack240,0);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  uVar7 = lib::L2CValue::as_integer(aLStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack176,fVar10);
  uVar6 = lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
LAB_71001460e0:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack624,aLStack160);
      FUN_7100147af0(aLStack112,this,aLStack624);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack624);
      if ((bVar2 & 1U) != 0) {
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,fVar10);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        lib::L2CValue::L2CValue(aLStack224,0x1a5c0b8105);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack416,false);
        lib::L2CValue::L2CValue(aLStack496,false);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        HVar8 = lib::L2CValue::as_hash(aLStack224);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack240);
        bVar1 = lib::L2CValue::as_bool(aLStack416);
        bVar3 = lib::L2CValue::as_bool(aLStack496);
        app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
                  (this->moduleAccessor,iVar4,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),
                   (bool)(bVar3 & 1),0.0,true,true,false);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack176);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
        pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
        app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar9,false);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK)
        ;
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      FUN_7100148080(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack592,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack608,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue(aLStack592);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack176,HVar8);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x2034fd9b5c);
    uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      FUN_7100147290(aLStack112,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_71001459a4;
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
LAB_71001459a4:
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
LAB_71001460d8:
        lib::L2CValue::_L2CValue(aLStack176);
        goto LAB_71001460e0;
      }
      lib::L2CValue::L2CValue(aLStack112,0x2034fd9b5c);
      uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack224,_CONTROL_PAD_BUTTON_GUARD);
        iVar4 = lib::L2CValue::as_integer(aLStack224);
        bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar2 & 1U) == 0) {
          FUN_7100147830(aLStack240,this);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((bVar2 & 1U) == 0) goto LAB_71001459fc;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack224);
        }
        lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_END);
        lib::L2CValue::L2CValue(aLStack304,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
LAB_71001459fc:
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PASS);
        iVar4 = lib::L2CValue::as_integer(aLStack224);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar2 & 1U) == 0) {
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((uVar6 & 1) == 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
            lib::L2CValue::L2CValue(aLStack112,true);
            uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack224);
            if ((uVar6 & 1) == 0) {
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
              lib::L2CValue::operator_(pLVar5,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,0);
              uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack224);
              if ((uVar6 & 1) == 0) {
                pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
                fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
                lib::L2CValue::L2CValue(aLStack416,fVar10);
                lib::L2CValue::operator_(aLStack416);
                lib::L2CValue::operator_(pLVar5,aLStack240);
                lib::L2CValue::L2CValue(aLStack112,0.0);
                uVar6 = lib::L2CValue::operator_(aLStack112,aLStack224);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar6 & 1) == 0) {
                  lib::L2CValue::_L2CValue(aLStack224);
                  lib::L2CValue::_L2CValue(aLStack240);
                  lib::L2CValue::_L2CValue(aLStack416);
                }
                else {
                  FUN_71001479a0(aLStack112,this);
                  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
                  lib::L2CValue::_L2CValue(aLStack112);
                  lib::L2CValue::_L2CValue(aLStack224);
                  lib::L2CValue::_L2CValue(aLStack240);
                  lib::L2CValue::_L2CValue(aLStack416);
                  if ((bVar2 & 1U) != 0) {
                    lib::L2CValue::L2CValue
                              (aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
                    iVar4 = lib::L2CValue::as_integer(aLStack112);
                    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
                    lib::L2CValue::_L2CValue(aLStack112);
                    lib::L2CValue::L2CValue
                              (aLStack432,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
                    lib::L2CValue::L2CValue(aLStack448,true);
                    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
                    lib::L2CValue::_L2CValue(aLStack448);
                    lib::L2CValue::_L2CValue(aLStack432);
                    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                    goto LAB_7100145bdc;
                  }
                }
              }
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_TURN_DASH);
              lib::L2CValue::operator_(pLVar5,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
              lib::L2CValue::_L2CValue(aLStack224);
              if ((bVar2 & 1U) != 0) {
                FUN_71001479a0(aLStack112,this);
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((bVar2 & 1U) != 0) {
                  lib::L2CValue::L2CValue
                            (aLStack464,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_TURN);
                  lib::L2CValue::L2CValue(aLStack480,true);
                  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
                  lib::L2CValue::_L2CValue(aLStack480);
                  lib::L2CValue::_L2CValue(aLStack464);
                  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                  goto LAB_7100145bdc;
                }
              }
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
              fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack224,fVar10);
              lib::L2CValue::operator_(pLVar5,aLStack224);
              lib::L2CValue::L2CValue(aLStack416,0x6e5ec7051);
              lib::L2CValue::L2CValue(aLStack496,0xcf44ba9e5);
              uVar6 = lib::L2CValue::as_integer(aLStack416);
              uVar7 = lib::L2CValue::as_integer(aLStack496);
              fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar6,uVar7);
              lib::L2CValue::L2CValue(aLStack240,fVar10);
              uVar6 = lib::L2CValue::operator__(aLStack240,aLStack112);
              lib::L2CValue::_L2CValue(aLStack240);
              lib::L2CValue::_L2CValue(aLStack496);
              lib::L2CValue::_L2CValue(aLStack416);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack224);
              if ((uVar6 & 1) == 0) {
                pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
                fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
                lib::L2CValue::L2CValue(aLStack240,fVar10);
                lib::L2CValue::operator_(aLStack240);
                lib::L2CValue::operator_(pLVar5,aLStack224);
                lib::L2CValue::L2CValue(aLStack496,0x6e5ec7051);
                lib::L2CValue::L2CValue(aLStack544,0xcf44ba9e5);
                uVar6 = lib::L2CValue::as_integer(aLStack496);
                uVar7 = lib::L2CValue::as_integer(aLStack544);
                fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (this->moduleAccessor,uVar6,uVar7);
                lib::L2CValue::L2CValue(aLStack416,fVar10);
                uVar6 = lib::L2CValue::operator__(aLStack416,aLStack112);
                lib::L2CValue::_L2CValue(aLStack416);
                lib::L2CValue::_L2CValue(aLStack544);
                lib::L2CValue::_L2CValue(aLStack496);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::_L2CValue(aLStack224);
                lib::L2CValue::_L2CValue(aLStack240);
                if ((uVar6 & 1) == 0) goto LAB_71001460d8;
                lib::L2CValue::L2CValue
                          (aLStack560,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_WALK_B);
                lib::L2CValue::L2CValue(aLStack576,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
                lib::L2CValue::_L2CValue(aLStack576);
                lib::L2CValue::_L2CValue(aLStack560);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack512,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_WALK_F);
                lib::L2CValue::L2CValue(aLStack528,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
                lib::L2CValue::_L2CValue(aLStack528);
                lib::L2CValue::_L2CValue(aLStack512);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              }
            }
            else {
              lib::L2CValue::L2CValue
                        (aLStack384,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
              lib::L2CValue::L2CValue(aLStack400,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
              lib::L2CValue::_L2CValue(aLStack400);
              lib::L2CValue::_L2CValue(aLStack384);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            }
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack352,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
            lib::L2CValue::L2CValue(aLStack368,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack368);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
          lib::L2CValue::L2CValue(aLStack336,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        }
      }
    }
LAB_7100145bdc:
    lib::L2CValue::_L2CValue(aLStack176);
  }
LAB_7100146368:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

