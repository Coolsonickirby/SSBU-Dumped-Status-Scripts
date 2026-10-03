
void FUN_7100006ba0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float local_a0;
  float fStack156;
  undefined8 uStack152;
  float local_90;
  float fStack140;
  undefined8 uStack136;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  
  uVar2 = lib::L2CValue::as_number(param_3);
  uVar3 = lib::L2CValue::as_number(param_4);
  local_70 = CONCAT44(uVar3,uVar2);
  uStack104 = 0;
  uVar2 = lib::L2CValue::as_number(param_5);
  uVar3 = lib::L2CValue::as_number(param_6);
  local_80 = CONCAT44(uVar3,uVar2);
  uStack120 = 0;
  local_90 = (float)lib::L2CValue::as_number(param_7);
  fStack140 = (float)lib::L2CValue::as_number(param_8);
  uStack136 = 0;
  local_a0 = (float)lib::L2CValue::as_number(param_9);
  fStack156 = (float)lib::L2CValue::as_number(param_10);
  uStack152 = 0;
  bVar1 = lib::L2CValue::as_bool(param_11);
  bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_normal_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Vector2f *)&local_70,
                     (Vector2f *)&local_80,(Vector2f *)&local_90,(Vector2f *)&local_a0,
                     (bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(param_1 + 0x10,local_90);
  lib::L2CValue::L2CValue(param_1 + 0x20,fStack140);
  lib::L2CValue::L2CValue(param_1 + 0x30,local_a0);
  lib::L2CValue::L2CValue(param_1 + 0x40,fStack156);
  return;
}

