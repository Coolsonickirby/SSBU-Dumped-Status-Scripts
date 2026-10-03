
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100034980(long param_1)

{
  int iVar1;
  L2CValue *this;
  float fVar2;
  undefined8 uVar3;
  float in_register_00005008;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = app::lua_bind::PhysicsModule__get_2nd_node_num_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator-(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  uVar3 = app::lua_bind::PhysicsModule__get_2nd_speed_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar3);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar3 >> 0x20));
  lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
  FUN_7100008290(aLStack112,param_1,aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_FLOAT_SPEED_Y);
  fVar2 = (float)lib::L2CValue::as_number(aLStack176);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar2,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

