
void FUN_710002ac50(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue *this;
  L2CValue *this_00;
  float fVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  float in_register_00005008;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  iVar1 = lib::L2CValue::as_integer(param_2);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  uVar2 = lib::L2CValue::operator==
                    (aLStack112,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y);
  if ((uVar2 & 1) == 0) {
    HVar3 = lib::L2CValue::as_hash(param_3);
    uVar6 = app::lua_bind::GroundModule__get_shape_data_rhombus_modify_node_offset_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3);
    lib::L2CValue::L2CValue(aLStack176,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar6 >> 0x20));
    fVar4 = 0.0;
    lib::L2CValue::L2CValue(aLStack144,in_register_00005008);
    FUN_710000eb70(aLStack128,param_1,aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    HVar3 = lib::L2CValue::as_hash(param_3);
    uVar2 = lib::L2CValue::as_number(aLStack112);
    lVar7 = lib::L2CValue::as_number(this);
    uVar5 = lib::L2CValue::as_number(this_00);
    local_60 = uVar2 & 0xffffffff | lVar7 << 0x20;
    uStack88 = (ulong)uVar5;
    uVar6 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,(Vector3f *)&local_60)
    ;
    lib::L2CValue::L2CValue(aLStack224,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::L2CValue(aLStack192,fVar4);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator+
              ((L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y,
               (L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    fVar4 = (float)lib::L2CValue::as_number(aLStack240);
    iVar1 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

