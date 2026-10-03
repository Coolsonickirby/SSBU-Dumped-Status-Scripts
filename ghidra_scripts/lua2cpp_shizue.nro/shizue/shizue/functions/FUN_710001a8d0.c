
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a8d0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar4 = lib::L2CValue::operator==(param_3,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar5 = (L2CValue *)((long)param_2 + 200);
  if ((uVar4 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
    lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
      lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) goto LAB_710001a94c;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
    lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(pLVar6,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) goto LAB_710001a94c;
    }
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
LAB_710001a94c:
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
    lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar5,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack176);
      GVar2 = lib::L2CValue::as_integer(param_9);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar2);
      iVar3 = lib::L2CValue::as_integer(param_7);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::operator=(aLStack144,param_5);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      GVar2 = lib::L2CValue::as_integer(param_8);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar2);
      iVar3 = lib::L2CValue::as_integer(param_6);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::operator=(aLStack144,param_4);
    }
    lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      uVar4 = lib::L2CValue::operator==(param_3,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        lib::L2CValue::L2CValue(aLStack208,false);
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        fVar8 = (float)lib::L2CValue::as_number(aLStack128);
        fVar9 = (float)lib::L2CValue::as_number(aLStack192);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        app::lua_bind::MotionModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar7,fVar8,fVar9,
                   (bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      else {
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar7,-1.0,1.0,0.0,false,
                   false);
      }
    }
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

