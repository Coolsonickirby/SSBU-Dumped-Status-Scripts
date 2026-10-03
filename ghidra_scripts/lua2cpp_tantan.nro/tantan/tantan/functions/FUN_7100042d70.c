
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042d70(L2CValue *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REVERSE_LR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,false);
    return;
  }
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack160,lVar5);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  uVar4 = lib::L2CValue::operator==(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    lib::L2CValue::operator=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,HVar6);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xe5c816343);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xf52caf696);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0xead7ed0f7);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        goto LAB_710004340c;
      }
      lib::L2CValue::L2CValue(aLStack96,0xec0bbbbde);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0xd0ebd033b);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        goto LAB_710004340c;
      }
      lib::L2CValue::L2CValue(aLStack96,0x1431f9742a);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x124dff7606);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        goto LAB_710004340c;
      }
      lib::L2CValue::L2CValue(aLStack96,0x152c67a3e0);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x135398fe7f);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        goto LAB_710004340c;
      }
      lib::L2CValue::L2CValue(aLStack96,0x12f99e78ac);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1128cdb3d8);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        goto LAB_710004340c;
      }
      lib::L2CValue::L2CValue(aLStack96,0x13e7f9f0d5);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x124eb7a24a);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        goto LAB_710004340c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xd3d6337ff);
      lib::L2CValue::operator=(aLStack128,aLStack96);
LAB_710004340c:
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3)
    ;
    goto LAB_7100043438;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::operator=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,HVar6);
  lib::L2CValue::operator=(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xe88c05c9c);
  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xf868bc949);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0xe5771ed94);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_710004338c;
    }
    lib::L2CValue::L2CValue(aLStack96,0xe14fa8401);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0xdf4b23e58);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_710004338c;
    }
    lib::L2CValue::L2CValue(aLStack96,0x142741fa50);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x12b7f04b65);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_710004338c;
    }
    lib::L2CValue::L2CValue(aLStack96,0x153adf2d9a);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x13a997c31c);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_710004338c;
    }
    lib::L2CValue::L2CValue(aLStack96,0x122ddf4773);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x11d2c28ebb);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_710004338c;
    }
    lib::L2CValue::L2CValue(aLStack96,0x1333b8cf0a);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x12b4b89f29);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_710004338c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xdc76c0a9c);
    lib::L2CValue::operator=(aLStack128,aLStack96);
LAB_710004338c:
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
LAB_7100043438:
  lib::L2CValue::~L2CValue(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar7 = (float)app::lua_bind::MotionModule__frame_partial_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::operator=(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,true);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  fVar7 = (float)lib::L2CValue::as_number(aLStack144);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  bVar2 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,HVar6,fVar7,fVar8,
             (bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true,true,false);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  app::lua_bind::PostureModule__reverse_lr_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  app::lua_bind::PostureModule__update_rot_y_lr_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,0.0);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::FighterControlModuleImpl__set_overwrite_pad_lr_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar7);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack160,0x227270baef);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  HVar6 = lib::L2CValue::as_hash(aLStack160);
  app::lua_bind::LinkModule__send_event_nodes_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,HVar6,0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REVERSE_LR);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(param_1,true);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

