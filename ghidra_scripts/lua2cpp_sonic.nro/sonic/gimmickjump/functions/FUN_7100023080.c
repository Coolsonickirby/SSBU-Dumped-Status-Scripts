
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023080(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  long lVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = (L2CValue *)(param_1 + 200);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::~L2CValue(aLStack112);
        goto LAB_71000230d4;
      }
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) goto LAB_7100023394;
      goto LAB_71000230d4;
    }
    pLVar5 = aLStack112;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
LAB_71000230d4:
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_SONIC_GIMMICKJUMP_INSTANCE_WORK_INT_MOTION_KIND_AIR)
      ;
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_SONIC_GIMMICKJUMP_INSTANCE_WORK_INT_MOTION_KIND);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_RESET);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar4);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar8);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar9 = lib::L2CValue::as_hash(aLStack80);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar9,fVar10,fVar11,
               (bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_7100023394:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

