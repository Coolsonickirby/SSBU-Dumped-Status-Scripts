
void FUN_7100005490(L2CValue *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  Hash40 HVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  bVar1 = app::lua_bind::AttackModule__is_hit_abs_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  uVar3 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar3 & 1) != 0) {
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,HVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x83ec83f4b);
    uVar3 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_7100005634;
    lib::L2CValue::L2CValue(aLStack80,0x54f934137);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,3.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CValue::L2CValue(aLStack160,true);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    uVar5 = lib::L2CValue::as_number(aLStack96);
    uVar6 = lib::L2CValue::as_number(aLStack112);
    uVar7 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar6,uVar5);
    uStack56 = (ulong)uVar7;
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ModelModule__set_joint_translate_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,(Vector3f *)&local_40,
               (bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100005634:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

