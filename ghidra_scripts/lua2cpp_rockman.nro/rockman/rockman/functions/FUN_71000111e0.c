
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000111e0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this;
  float fVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
  if ((bVar1 & 1U) == 0) {
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,1);
      uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,2);
        uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,3);
          uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) goto LAB_7100011514;
          lib::L2CValue::L2CValue(aLStack96,0xb9c8e228a);
          lib::L2CValue::operator=(aLStack112,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x73290c6be);
          lib::L2CValue::operator=(aLStack112,aLStack96);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xdc97b0637);
        lib::L2CValue::operator=(aLStack112,aLStack96);
      }
      goto LAB_710001150c;
    }
    lib::L2CValue::L2CValue(aLStack96,1);
    uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x124e3470d4);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      goto LAB_710001150c;
    }
    lib::L2CValue::L2CValue(aLStack96,2);
    uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0xc3a4e2597);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      goto LAB_710001150c;
    }
    lib::L2CValue::L2CValue(aLStack96,3);
    uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x10fb70cc64);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      goto LAB_710001150c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1);
    uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,2);
      uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,3);
        uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) goto LAB_7100011514;
        lib::L2CValue::L2CValue(aLStack96,0xdb1956151);
        lib::L2CValue::operator=(aLStack112,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x9b01369d5);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator=(aLStack128,aLStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xf446227d2);
      lib::L2CValue::operator=(aLStack112,aLStack96);
    }
LAB_710001150c:
    lib::L2CValue::~L2CValue(aLStack96);
  }
LAB_7100011514:
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_L_SHOULDER_FIX);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_GENERATE_TOP_N_OFFSET);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4)
    ;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_L_SHOULDER_FIX);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_GENERATE_TOP_N_OFFSET);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROCKMAN_MOTION_PART_SET_UDE);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack160,HVar6);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  bVar2 = lib::L2CValue::operator==(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,(bool)(~bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_4);
  if ((bVar1 & 1U) != 0) {
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    if ((bVar1 & 1U) == 0) {
      fVar7 = (float)app::lua_bind::MotionModule__frame_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::operator=(aLStack96,aLStack160);
      this = aLStack160;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROCKMAN_MOTION_PART_SET_UDE);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar7 = (float)app::lua_bind::MotionModule__frame_partial_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::operator=(aLStack96,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      this = aLStack176;
    }
    lib::L2CValue::~L2CValue(this);
  }
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROCKMAN_MOTION_PART_SET_UDE);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,false);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack160,1.0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
  if ((bVar1 & 1U) == 0) {
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_6);
    if ((bVar1 & 1U) == 0) {
      bVar1 = lib::L2CValue::operator.cast.to.bool(param_4);
      if ((bVar1 & 1U) != 0) {
        HVar6 = app::lua_bind::MotionModule__motion_kind_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack176,HVar6);
        uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) == 0) {
          HVar6 = lib::L2CValue::as_hash(aLStack112);
          fVar7 = (float)lib::L2CValue::as_number(aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack160);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,0.0,false,
                     false);
        }
        goto LAB_7100011a90;
      }
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,
                 (bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,6.0);
      bVar1 = lib::L2CValue::operator.cast.to.bool(param_4);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        fVar7 = (float)lib::L2CValue::as_number(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack160);
        bVar2 = lib::L2CValue::as_bool(aLStack192);
        fVar9 = (float)lib::L2CValue::as_number(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,
                   (bool)(bVar2 & 1),fVar9,false,false);
        goto LAB_7100011a80;
      }
      HVar6 = app::lua_bind::MotionModule__motion_kind_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack192,HVar6);
      uVar5 = lib::L2CValue::operator==(aLStack192,aLStack112);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((uVar5 & 1) == 0) {
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        fVar7 = (float)lib::L2CValue::as_number(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack160);
        fVar9 = (float)lib::L2CValue::as_number(aLStack176);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,fVar9,false,
                   false);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,false);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_4);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_ROCKMAN_MOTION_PART_SET_UDE);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,HVar6,fVar7,fVar8,
                 (bool)(bVar2 & 1),false,0.0,true,true,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_ROCKMAN_MOTION_PART_SET_UDE);
      lib::L2CValue::L2CValue(aLStack208,true);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      bVar3 = lib::L2CValue::as_bool(aLStack208);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,HVar6,fVar7,fVar8,
                 (bool)(bVar2 & 1),(bool)(bVar3 & 1),0.0,true,true,false);
      lib::L2CValue::~L2CValue(aLStack208);
    }
LAB_7100011a80:
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::~L2CValue(aLStack176);
LAB_7100011a90:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

