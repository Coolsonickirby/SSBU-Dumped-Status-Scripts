
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000171d0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9)

{
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar5 = lib::L2CValue::operator==(param_3,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    FUN_7100017590(aLStack128,param_2);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(param_1,false);
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,0);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    GVar3 = lib::L2CValue::as_integer(param_9);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar3);
    lib::L2CValue::L2CValue(aLStack128,_KINETIC_TYPE_NONE);
    uVar5 = lib::L2CValue::operator==(param_7,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      iVar4 = lib::L2CValue::as_integer(param_7);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    }
    lib::L2CValue::operator=(aLStack144,param_5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    GVar3 = lib::L2CValue::as_integer(param_8);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar3);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_NONE);
    uVar5 = lib::L2CValue::operator==(param_6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      iVar4 = lib::L2CValue::as_integer(param_6);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    }
    lib::L2CValue::operator=(aLStack144,param_4);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_NONE);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    uVar5 = lib::L2CValue::operator==(param_3,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack192,1.0);
      lib::L2CValue::L2CValue(aLStack208,false);
      HVar6 = lib::L2CValue::as_hash(aLStack144);
      fVar7 = (float)lib::L2CValue::as_number(aLStack128);
      fVar8 = (float)lib::L2CValue::as_number(aLStack192);
      bVar2 = lib::L2CValue::as_bool(aLStack208);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar6,fVar7,fVar8,
                 (bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      HVar6 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar6,-1.0,1.0,0.0,false,
                 false);
    }
  }
  lib::L2CValue::L2CValue(param_1,true);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

