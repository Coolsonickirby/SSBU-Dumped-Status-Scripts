
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007610(L2CFighterCommon *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  ulong uVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
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
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,9);
  lib::L2CValue::L2CValue(aLStack224,pLVar5);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,10);
  lib::L2CValue::L2CValue(aLStack240,pLVar5);
  ppBVar9 = &param_1->moduleAccessor;
  HVar6 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack256,HVar6);
  lib::L2CValue::L2CValue(aLStack272,0x1454acacb0);
  lib::L2CValue::L2CValue(aLStack288,0x1454acacb0);
  lib::L2CValue::L2CValue(aLStack304,0x1a793b0b2f);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT);
  uVar7 = lib::L2CValue::operator==(aLStack224,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_LANDING);
    uVar7 = lib::L2CValue::operator==(aLStack224,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) goto LAB_7100007794;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_JUMP_SQUAT);
    uVar7 = lib::L2CValue::operator==(aLStack224,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) goto LAB_7100007794;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_F);
    uVar7 = lib::L2CValue::operator==(aLStack224,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_F);
      uVar7 = lib::L2CValue::operator==(aLStack240,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) {
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
        fVar10 = (float)app::sv_fighter_util::get_walk_speed_mul(param_1->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack208,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack192,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack176,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack320,0x144b518bb3);
        lib::L2CValue::L2CValue(aLStack336,0);
        uVar7 = lib::L2CValue::as_integer(aLStack320);
        uVar8 = lib::L2CValue::as_integer(aLStack336);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack144,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::L2CValue(aLStack400,aLStack144);
        lib::L2CValue::L2CValue(aLStack416,0x15703f8998);
        lib::L2CValue::L2CValue(aLStack432,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
        lib::L2CValue::L2CValue(aLStack448,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED_FAST_RATIO);
        lib::L2CValue::L2CValue(aLStack464,aLStack208);
        lib::L2CValue::L2CValue(aLStack480,false);
        lua2cpp::L2CFighterCommon::init_move_speed
                  (param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40,
                   (L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack480);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::~L2CValue(aLStack448);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::L2CValue(aLStack128,0x15703f8998);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,1.0);
        lib::L2CValue::L2CValue(aLStack352,false);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack320);
        fVar11 = (float)lib::L2CValue::as_number(aLStack336);
        bVar1 = lib::L2CValue::as_bool(aLStack352);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack128);
        fVar10 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator/(aLStack208,aLStack128);
        lua2cpp::L2CFighterCommon::item_shoot_walk_set_motion_rate_New(param_1,(L2CValue)0x10);
        lib::L2CValue::~L2CValue(aLStack496);
        lib::L2CValue::~L2CValue(aLStack128);
        uVar7 = lib::L2CValue::operator==(aLStack256,aLStack272);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          lib::L2CValue::L2CValue(aLStack320,false);
          lib::L2CValue::L2CValue(aLStack336,true);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar6 = lib::L2CValue::as_hash(aLStack304);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack320);
          bVar2 = lib::L2CValue::as_bool(aLStack336);
          app::lua_bind::MotionModule__add_motion_partial_impl
                    (*ppBVar9,iVar4,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true
                     ,true,false);
LAB_7100008868:
          lib::L2CValue::~L2CValue(aLStack336);
          goto LAB_7100008870;
        }
        lib::L2CValue::L2CValue(aLStack336,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        iVar4 = lib::L2CValue::as_integer(aLStack336);
        HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack320,HVar6);
        lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
        uVar7 = lib::L2CValue::operator==(aLStack320,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack336);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          lib::L2CValue::L2CValue(aLStack320,false);
          lib::L2CValue::L2CValue(aLStack336,true);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar6 = lib::L2CValue::as_hash(param_2);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack320);
          bVar2 = lib::L2CValue::as_bool(aLStack336);
          app::lua_bind::MotionModule__add_motion_partial_impl
                    (*ppBVar9,iVar4,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true
                     ,true,false);
          goto LAB_7100008868;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack320);
        app::lua_bind::MotionModule__set_frame_partial_sync_anim_cmd_impl
                  (*ppBVar9,iVar4,fVar10,true);
LAB_7100008870:
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack128,true);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl(*ppBVar9,(bool)(bVar1 & 1));
      goto LAB_71000089ec;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_B);
    uVar7 = lib::L2CValue::operator==(aLStack224,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_B);
      uVar7 = lib::L2CValue::operator==(aLStack240,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) {
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
        fVar10 = (float)app::sv_fighter_util::get_walk_speed_mul(param_1->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack208,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack192,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack176,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack336,0x144b518bb3);
        lib::L2CValue::L2CValue(aLStack352,0);
        uVar7 = lib::L2CValue::as_integer(aLStack336);
        uVar8 = lib::L2CValue::as_integer(aLStack352);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack320,fVar10);
        lib::L2CValue::L2CValue(aLStack512,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack528,0x14efa045eb);
        uVar7 = lib::L2CValue::as_integer(aLStack512);
        uVar8 = lib::L2CValue::as_integer(aLStack528);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack368,fVar10);
        lib::L2CValue::operator*(aLStack320,aLStack368);
        lib::L2CValue::operator=(aLStack144,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::L2CValue(aLStack560,aLStack144);
        lib::L2CValue::L2CValue(aLStack576,0x1577524d81);
        lib::L2CValue::L2CValue(aLStack592,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
        lib::L2CValue::L2CValue(aLStack608,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED_FAST_RATIO);
        lib::L2CValue::L2CValue(aLStack624,aLStack208);
        lib::L2CValue::L2CValue(aLStack640,true);
        lua2cpp::L2CFighterCommon::init_move_speed
                  (param_1,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,
                   (L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::~L2CValue(aLStack544);
        lib::L2CValue::~L2CValue(aLStack640);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack560);
        lib::L2CValue::L2CValue(aLStack128,0x1577524d81);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,1.0);
        lib::L2CValue::L2CValue(aLStack352,false);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack320);
        fVar11 = (float)lib::L2CValue::as_number(aLStack336);
        bVar1 = lib::L2CValue::as_bool(aLStack352);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack128);
        fVar10 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator/(aLStack208,aLStack128);
        lua2cpp::L2CFighterCommon::item_shoot_walk_set_motion_rate_New(param_1,(L2CValue)0x70);
        lib::L2CValue::~L2CValue(aLStack656);
        lib::L2CValue::~L2CValue(aLStack128);
        uVar7 = lib::L2CValue::operator==(aLStack256,aLStack272);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          lib::L2CValue::L2CValue(aLStack320,false);
          lib::L2CValue::L2CValue(aLStack336,true);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar6 = lib::L2CValue::as_hash(aLStack304);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack320);
          bVar2 = lib::L2CValue::as_bool(aLStack336);
          app::lua_bind::MotionModule__add_motion_partial_impl
                    (*ppBVar9,iVar4,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true
                     ,true,false);
LAB_71000089b0:
          lib::L2CValue::~L2CValue(aLStack336);
          goto LAB_71000089b8;
        }
        lib::L2CValue::L2CValue(aLStack336,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        iVar4 = lib::L2CValue::as_integer(aLStack336);
        HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack320,HVar6);
        lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
        uVar7 = lib::L2CValue::operator==(aLStack320,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack336);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          lib::L2CValue::L2CValue(aLStack320,false);
          lib::L2CValue::L2CValue(aLStack336,true);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar6 = lib::L2CValue::as_hash(param_2);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack320);
          bVar2 = lib::L2CValue::as_bool(aLStack336);
          app::lua_bind::MotionModule__add_motion_partial_impl
                    (*ppBVar9,iVar4,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true
                     ,true,false);
          goto LAB_71000089b0;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack320);
        app::lua_bind::MotionModule__set_frame_partial_sync_anim_cmd_impl
                  (*ppBVar9,iVar4,fVar10,true);
LAB_71000089b8:
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack128,true);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl(*ppBVar9,(bool)(bVar1 & 1));
      goto LAB_71000089ec;
    }
    lib::L2CValue::L2CValue(aLStack672,aLStack224);
    FUN_7100007320(aLStack128,aLStack672);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack672);
    if ((bVar3 & 1U) == 0) goto LAB_71000089f4;
    lib::L2CValue::L2CValue(aLStack320,false);
    lib::L2CValue::L2CValue(aLStack688,aLStack240);
    FUN_71000071a0(aLStack128,aLStack688);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack688);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_UPPER_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack336);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::operator=(aLStack192,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::L2CValue(aLStack128,-1.0);
      uVar7 = lib::L2CValue::operator==(aLStack192,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack336,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_UPPER_RATE);
        iVar4 = lib::L2CValue::as_integer(aLStack336);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack176,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::L2CValue(aLStack128,true);
        lib::L2CValue::operator=(aLStack160,aLStack128);
      }
      else {
        uVar7 = lib::L2CValue::operator==(aLStack256,aLStack272);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::operator=(aLStack192,aLStack128);
        }
        else {
          fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack128,fVar10);
          lib::L2CValue::operator=(aLStack192,aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack128,fVar10);
          lib::L2CValue::operator=(aLStack176,aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,true);
          lib::L2CValue::operator=(aLStack320,aLStack128);
        }
      }
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,true);
    uVar7 = lib::L2CValue::operator==(aLStack160,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,true);
      uVar7 = lib::L2CValue::operator==(aLStack320,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack336,true);
        HVar6 = lib::L2CValue::as_hash(param_3);
        fVar10 = (float)lib::L2CValue::as_number(aLStack192);
        fVar11 = (float)lib::L2CValue::as_number(aLStack176);
        fVar12 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack336);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar9,HVar6,fVar10,fVar11,fVar12,(bool)(bVar1 & 1),false);
        goto LAB_7100008c54;
      }
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar6 = lib::L2CValue::as_hash(param_3);
      fVar10 = (float)lib::L2CValue::as_number(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,true);
      HVar6 = lib::L2CValue::as_hash(param_3);
      fVar10 = (float)lib::L2CValue::as_number(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      fVar12 = (float)lib::L2CValue::as_number(aLStack336);
      bVar2 = lib::L2CValue::as_bool(aLStack352);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),fVar12,(bool)(bVar2 & 1),false);
      lib::L2CValue::~L2CValue(aLStack352);
LAB_7100008c54:
      lib::L2CValue::~L2CValue(aLStack336);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack352);
    HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack336,HVar6);
    lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
    uVar7 = lib::L2CValue::operator==(aLStack336,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack352);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::MotionModule__remove_motion_partial_comp_impl(*ppBVar9,iVar4);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,false);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl(*ppBVar9,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar5 = aLStack320;
  }
  else {
LAB_7100007794:
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_JUMP);
    uVar7 = lib::L2CValue::operator==(aLStack240,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
      uVar7 = lib::L2CValue::operator==(aLStack240,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) goto LAB_71000077ec;
    }
    else {
LAB_71000077ec:
      fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::operator=(aLStack192,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::operator=(aLStack176,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,true);
      lib::L2CValue::operator=(aLStack160,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT);
    uVar7 = lib::L2CValue::operator==(aLStack224,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      uVar7 = lib::L2CValue::operator==(aLStack256,aLStack272);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack336,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        iVar4 = lib::L2CValue::as_integer(aLStack336);
        HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack320,HVar6);
        lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
        uVar7 = lib::L2CValue::operator==(aLStack320,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack336);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,0x1a5c0b8105);
          uVar7 = lib::L2CValue::operator==(param_2,aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar7 & 1) == 0) {
            fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
            lib::L2CValue::L2CValue(aLStack128,fVar10);
            lib::L2CValue::operator=(aLStack192,aLStack128);
            lib::L2CValue::~L2CValue(aLStack128);
            fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
            lib::L2CValue::L2CValue(aLStack128,fVar10);
            lib::L2CValue::operator=(aLStack176,aLStack128);
            lib::L2CValue::~L2CValue(aLStack128);
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          lib::L2CValue::L2CValue(aLStack320,false);
          lib::L2CValue::L2CValue(aLStack336,true);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          HVar6 = lib::L2CValue::as_hash(param_2);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack320);
          bVar2 = lib::L2CValue::as_bool(aLStack336);
          app::lua_bind::MotionModule__add_motion_partial_impl
                    (*ppBVar9,iVar4,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true
                     ,true,false);
          goto LAB_7100007c2c;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack320,fVar10);
        fVar10 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack336,fVar10);
        lib::L2CValue::L2CValue(aLStack352,false);
        lib::L2CValue::L2CValue(aLStack368,true);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        HVar6 = lib::L2CValue::as_hash(aLStack304);
        fVar10 = (float)lib::L2CValue::as_number(aLStack320);
        fVar11 = (float)lib::L2CValue::as_number(aLStack336);
        bVar1 = lib::L2CValue::as_bool(aLStack352);
        bVar2 = lib::L2CValue::as_bool(aLStack368);
        app::lua_bind::MotionModule__add_motion_partial_impl
                  (*ppBVar9,iVar4,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true,
                   true,false);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
LAB_7100007c2c:
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack128,true);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl(*ppBVar9,(bool)(bVar1 & 1));
    }
    else {
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar4 = lib::L2CValue::as_integer(aLStack336);
      HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack320,HVar6);
      lib::L2CValue::L2CValue(aLStack128,0x1a5c0b8105);
      uVar7 = lib::L2CValue::operator==(aLStack320,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack336);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        iVar4 = lib::L2CValue::as_integer(aLStack320);
        HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack128,HVar6);
        uVar7 = lib::L2CValue::operator==(aLStack128,aLStack304);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack320);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack320,1.0);
          lib::L2CValue::L2CValue(aLStack336,false);
          HVar6 = lib::L2CValue::as_hash(param_4);
          fVar10 = (float)lib::L2CValue::as_number(aLStack128);
          fVar11 = (float)lib::L2CValue::as_number(aLStack320);
          bVar1 = lib::L2CValue::as_bool(aLStack336);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack336);
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack320);
          fVar10 = (float)app::lua_bind::MotionModule__frame_partial_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack128,fVar10);
          lib::L2CValue::~L2CValue(aLStack320);
          HVar6 = lib::L2CValue::as_hash(aLStack272);
          fVar10 = (float)lib::L2CValue::as_number(aLStack128);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar9,HVar6,fVar10,1.0,0.0,false,false);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
          iVar4 = lib::L2CValue::as_integer(aLStack320);
          app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar9,iVar4,false);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::L2CValue(aLStack320,false);
          bVar1 = lib::L2CValue::as_bool(aLStack320);
          app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl(*ppBVar9,(bool)(bVar1 & 1));
        }
        lib::L2CValue::~L2CValue(aLStack320);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::MotionModule__remove_motion_partial_comp_impl(*ppBVar9,iVar4);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack320,1.0);
        lib::L2CValue::L2CValue(aLStack336,false);
        HVar6 = lib::L2CValue::as_hash(param_4);
        fVar10 = (float)lib::L2CValue::as_number(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack320);
        bVar1 = lib::L2CValue::as_bool(aLStack336);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,false);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl(*ppBVar9,(bool)(bVar1 & 1));
      }
    }
LAB_71000089ec:
    pLVar5 = aLStack128;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_71000089f4:
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

