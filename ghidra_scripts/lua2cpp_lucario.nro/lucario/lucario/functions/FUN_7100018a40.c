
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018a40(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCARIO_STATUS_WORK_ID_INT_SPLIT_APPEAR_PHASE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,1);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        FUN_71000189a0(param_2);
        lib::L2CValue::L2CValue(aLStack96,true);
        bVar2 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::VisibilityModule__set_whole_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar2 & 1));
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x122f53c455);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar8,fVar11,fVar12,
                   (bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCARIO_STATUS_WORK_ID_INT_SPLIT_APPEAR_PHASE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__inc_int_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
LAB_7100018dd0:
        pLVar5 = aLStack96;
        goto LAB_7100018dd4;
      }
      lib::L2CValue::L2CValue(aLStack96,2);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)(param_2 + 200);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator==(pLVar9,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator==(pLVar9,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) {
            FUN_71000189a0(param_2);
            lib::L2CValue::L2CValue
                      (aLStack144,_FIGHTER_LUCARIO_STATUS_WORK_ID_INT_SPLIT_FRAME_COUNTER);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            iVar3 = app::lua_bind::WorkModule__get_int_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
            lib::L2CValue::L2CValue(aLStack128,iVar3);
            lib::L2CValue::L2CValue(aLStack96,0);
            uVar6 = lib::L2CValue::operator<=(aLStack128,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,5);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
              app::KineticUtility::clear_unable_energy(iVar3,pBVar10);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::KineticModule__enable_energy_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
            }
            goto LAB_7100018dd0;
          }
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar9,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator==(pLVar9,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) {
            FUN_7100018660(param_2);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,5);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
            app::KineticUtility::clear_unable_energy(iVar3,pBVar10);
            goto LAB_7100018dd0;
          }
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,false);
      bVar2 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::VisibilityModule__set_whole_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCARIO_STATUS_WORK_ID_INT_SPLIT_APPEAR_PHASE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0xb118362f3);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LUCARIO_STATUS_WORK_ID_INT_SPLIT_FRAME_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar5 = aLStack128;
LAB_7100018dd4:
      lib::L2CValue::~L2CValue(pLVar5);
    }
    pLVar5 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_STATUS_WORK_ID_INT_SPLIT_FRAME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,0);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar5 = aLStack128;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) goto LAB_7100018de0;
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__enable_energy_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      pLVar5 = aLStack96;
    }
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_7100018de0:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

