
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100025a80(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  Weapon *pWVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  bVar1 = app::lua_bind::LinkModule__is_model_constraint_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
    pWVar5 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
    app::WeaponSpecializer_SnakeC4::detach_constraint(pWVar5,true);
  }
  uVar8 = lib::L2CValue::as_number(param_3);
  uVar9 = lib::L2CValue::as_number(param_4);
  uVar10 = lib::L2CValue::as_number(param_5);
  local_50 = CONCAT44(uVar9,uVar8);
  uStack72 = (ulong)uVar10;
  app::lua_bind::PostureModule__init_pos_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Vector3f *)&local_50,true,true);
  bVar1 = app::lua_bind::GroundModule__attach_ground_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),true);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar6 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SNAKE_C4_STATUS_ESTABLISH_GROUND_WORK_FLAG_STICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::WeaponSpecializer_SnakeC4::stick_stage_rot(pBVar7);
  }
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

