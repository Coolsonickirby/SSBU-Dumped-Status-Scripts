
void FUN_7100028610(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  float fVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  float in_register_00005008;
  float fVar10;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  
  HVar2 = lib::L2CValue::as_hash(param_2);
  uVar8 = app::lua_bind::GroundModule__get_shape_data_rhombus_modify_node_offset_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::L2CValue(aLStack144,in_register_00005008);
  FUN_710000eb70(aLStack128,param_1,aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  iVar1 = lib::L2CValue::as_integer(param_3);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack192,fVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  uVar3 = lib::L2CValue::operator==(param_4,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar3 & 1) == 0) {
    uVar3 = lib::L2CValue::operator==
                      (aLStack192,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y);
    if ((uVar3 & 1) == 0) goto LAB_7100028940;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    fVar10 = 0.0;
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+(pLVar5,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    fVar6 = (float)lib::L2CValue::as_number(aLStack208);
    iVar1 = lib::L2CValue::as_integer(param_3);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,0xb7d64dc59);
    lib::L2CValue::L2CValue(aLStack224,0x170549b52f);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar6);
    lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  else {
    uVar3 = lib::L2CValue::operator==
                      (aLStack192,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y);
    if ((uVar3 & 1) != 0) goto LAB_7100028940;
    fVar10 = 0.0;
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+
              ((L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y,
               (L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    fVar6 = (float)lib::L2CValue::as_number(aLStack208);
    iVar1 = lib::L2CValue::as_integer(param_3);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  HVar2 = lib::L2CValue::as_hash(param_2);
  uVar3 = lib::L2CValue::as_number(aLStack192);
  lVar9 = lib::L2CValue::as_number(pLVar5);
  uVar7 = lib::L2CValue::as_number(this);
  local_70 = uVar3 & 0xffffffff | lVar9 << 0x20;
  uStack104 = (ulong)uVar7;
  uVar8 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue(aLStack272,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::L2CValue(aLStack240,fVar10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
LAB_7100028940:
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

