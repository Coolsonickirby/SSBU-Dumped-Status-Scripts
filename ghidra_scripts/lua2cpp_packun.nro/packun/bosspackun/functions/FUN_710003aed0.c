
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003aed0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack96,0x1c33953756);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_DOWN_RIGHT | _GROUND_TOUCH_FLAG_DOWN_LEFT)
    ;
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,true);
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_710003b028;
    }
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(param_1,false);
LAB_710003b028:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

