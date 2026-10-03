
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016f80(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_CAPTAIN_FALCONPUNCH_INSTANCE_WORK_ID_INT_OWNER_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x50000000);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&FIGHTER_STATUS_KIND_ITEM_SHOOT_JUMP);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack176,0x7fb997a80);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack192,fVar9);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack192,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack176,param_8);
        }
        else {
          lib::L2CValue::operator=(aLStack176,param_4);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack192,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack176,param_6);
        }
        else {
          lib::L2CValue::operator=(aLStack176,param_2);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack192,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack176,param_9);
        }
        else {
          lib::L2CValue::operator=(aLStack176,param_5);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack192,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack176,param_7);
        }
        else {
          lib::L2CValue::operator=(aLStack176,param_3);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      HVar8 = app::lua_bind::MotionModule__motion_kind_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack112,HVar8);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        HVar8 = lib::L2CValue::as_hash(aLStack176);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) == 0) goto LAB_71000174ac;
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&FIGHTER_STATUS_KIND_ITEM_SHOOT_JUMP);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack176,fVar9);
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_CAPTAIN_FALCONPUNCH_INSTANCE_WORK_ID_FLOAT_MOTION_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar9);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::operator-(aLStack176,aLStack192);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack208,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator=(aLStack208,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    fVar9 = (float)lib::L2CValue::as_number(aLStack208);
    app::lua_bind::MotionModule__set_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar9,true);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::~L2CValue(aLStack160);
LAB_71000174ac:
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

