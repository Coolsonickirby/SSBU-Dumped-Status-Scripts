
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001dfc0(long param_1)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  long lVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SONIC_STATUS_WORK_INT_MOT_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,lVar4);
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,HVar5);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SONIC_STATUS_WORK_INT_MOT_AIR_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    lVar4 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,lVar4);
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack160,HVar5);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack80,HVar5);
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        lVar4 = app::lua_bind::WorkModule__get_int64_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
        lib::L2CValue::L2CValue(aLStack96,lVar4);
        uVar6 = lib::L2CValue::operator==(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          lVar4 = app::lua_bind::WorkModule__get_int64_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
          lib::L2CValue::L2CValue(aLStack80,lVar4);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar1 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar8,fVar9,
                     (bool)(bVar1 & 1),0.0,false,false);
          goto LAB_710001e45c;
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        lVar4 = app::lua_bind::WorkModule__get_int64_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
        lib::L2CValue::L2CValue(aLStack80,lVar4);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack80,HVar5);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        lVar4 = app::lua_bind::WorkModule__get_int64_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
        lib::L2CValue::L2CValue(aLStack96,lVar4);
        uVar6 = lib::L2CValue::operator==(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          lVar4 = app::lua_bind::WorkModule__get_int64_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
          lib::L2CValue::L2CValue(aLStack80,lVar4);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar1 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar8,fVar9,
                     (bool)(bVar1 & 1),0.0,false,false);
LAB_710001e45c:
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          lVar4 = app::lua_bind::WorkModule__get_int64_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
          lib::L2CValue::L2CValue(aLStack80,lVar4);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,-1.0,1.0,0.0,false,false
                    );
        }
      }
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar7 = aLStack96;
      goto LAB_710001e480;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40))
  ;
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator.cast.to.bool(aLStack80);
  pLVar7 = aLStack80;
LAB_710001e480:
  lib::L2CValue::~L2CValue(pLVar7);
  return;
}

