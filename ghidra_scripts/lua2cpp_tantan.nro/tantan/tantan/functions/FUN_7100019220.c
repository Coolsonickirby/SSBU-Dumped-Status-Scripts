
void FUN_7100019220(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  L2CValue *this;
  float fVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float in_register_00005008;
  float fVar9;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  HVar2 = lib::L2CValue::as_hash(param_3);
  uVar6 = app::lua_bind::GroundModule__get_shape_data_rhombus_modify_node_offset_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack144,in_register_00005008);
  FUN_710000eb70(aLStack128,param_1,aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  fVar9 = 0.0;
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator+(pLVar3,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  fVar4 = (float)lib::L2CValue::as_number(aLStack192);
  iVar1 = lib::L2CValue::as_integer(param_2);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  HVar2 = lib::L2CValue::as_hash(param_3);
  uVar7 = lib::L2CValue::as_number(param_4);
  lVar8 = lib::L2CValue::as_number(pLVar3);
  uVar5 = lib::L2CValue::as_number(this);
  local_70 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack104 = (ulong)uVar5;
  uVar6 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue(aLStack240,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

