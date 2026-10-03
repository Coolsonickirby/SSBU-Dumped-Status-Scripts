
void FUN_7100006190(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  Hash40 HVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    bVar2 = app::lua_bind::AttackModule__is_hit_abs_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
    uVar4 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x54f934137);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,2.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      lib::L2CValue::L2CValue(aLStack160,true);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      uVar6 = lib::L2CValue::as_number(aLStack96);
      uVar7 = lib::L2CValue::as_number(aLStack112);
      uVar8 = lib::L2CValue::as_number(aLStack128);
      local_40 = CONCAT44(uVar7,uVar6);
      uStack56 = (ulong)uVar8;
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      bVar3 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::ModelModule__set_joint_translate_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5,(Vector3f *)&local_40,
                 (bool)(bVar2 & 1),(bool)(bVar3 & 1));
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

