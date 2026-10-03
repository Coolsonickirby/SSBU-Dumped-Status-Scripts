
void FUN_7100014fd0(void *param_1,L2CValue *param_2,L2CValue *param_3)

{
  ulong uVar1;
  Hash40 HVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  uVar1 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,180.0);
    lib::L2CValue::operator-((L2CValue *)&local_40,param_2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator=(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_40,180.0);
  uVar1 = lib::L2CValue::operator<((L2CValue *)&local_40,param_2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,360.0);
    lib::L2CValue::operator-(param_2,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator=(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
  uVar1 = lib::L2CValue::operator<(param_3,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,param_2);
    lib::L2CValue::L2CValue(aLStack144,param_3);
    lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::operator=(param_2,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::operator-(param_2);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  uVar4 = lib::L2CValue::as_number(aLStack160);
  uVar5 = lib::L2CValue::as_number(aLStack176);
  uVar6 = lib::L2CValue::as_number(aLStack192);
  local_40 = CONCAT44(uVar5,uVar4);
  uStack56 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar2,(Vector3f *)&local_40,0,0)
  ;
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

