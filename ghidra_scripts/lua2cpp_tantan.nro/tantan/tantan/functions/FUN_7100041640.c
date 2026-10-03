
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100041640(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_MAP_COLL_OFFSET_X_L);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack48,fVar3);
  uVar2 = lib::L2CValue::operator==
                    (aLStack48,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,(uVar2 & 1) == 0);
  return;
}

