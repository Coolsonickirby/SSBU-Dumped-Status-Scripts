
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016700(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
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
  float fVar10;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue
            (aLStack128,_WEAPON_CAPTAIN_FALCONPUNCH_INSTANCE_WORK_ID_INT_OWNER_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x50000000);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&FIGHTER_STATUS_KIND_ITEM_SHOOT_JUMP);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::L2CValue(aLStack192,0x7fb997a80);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack208,fVar9);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(aLStack176,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack208,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack192,param_8);
        }
        else {
          lib::L2CValue::operator=(aLStack192,param_4);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack208,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack192,param_6);
        }
        else {
          lib::L2CValue::operator=(aLStack192,param_2);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(aLStack176,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack208,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack192,param_9);
        }
        else {
          lib::L2CValue::operator=(aLStack192,param_5);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack208,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator=(aLStack192,param_7);
        }
        else {
          lib::L2CValue::operator=(aLStack192,param_3);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
    uVar5 = lib::L2CValue::operator==(aLStack192,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack224,1.0);
      lib::L2CValue::L2CValue(aLStack240,false);
      HVar8 = lib::L2CValue::as_hash(aLStack192);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack224);
      bVar1 = lib::L2CValue::as_bool(aLStack240);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8,fVar9,fVar10,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar5 = lib::L2CValue::operator==(aLStack176,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar2 & 1U) == 0) goto LAB_7100016c20;
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&FIGHTER_STATUS_KIND_ITEM_SHOOT_JUMP);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack192,fVar9);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::operator+(aLStack192,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_CAPTAIN_FALCONPUNCH_INSTANCE_WORK_ID_FLOAT_MOTION_FRAME);
    fVar9 = (float)lib::L2CValue::as_number(aLStack208);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar9,iVar3);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::~L2CValue(aLStack176);
LAB_7100016c20:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

