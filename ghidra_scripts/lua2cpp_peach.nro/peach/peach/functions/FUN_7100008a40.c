
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008a40(L2CValue *param_1,long param_2)

{
  int iVar1;
  L2CValue *this;
  ulong uVar2;
  Hash40 HVar3;
  long lVar4;
  float fVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,HVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,1.0);
  fVar5 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::AttackModule__set_shield_stiff_mul_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar5);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

