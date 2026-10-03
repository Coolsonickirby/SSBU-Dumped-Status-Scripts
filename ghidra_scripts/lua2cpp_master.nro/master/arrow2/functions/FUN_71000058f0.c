
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000058f0(void *param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  L2CValue *this;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  Weapon *pWVar9;
  Vector2f VVar10;
  uint uVar11;
  float fVar12;
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack168,_WEAPON_MASTER_ARROW1_STATUS_WORK_INT_EFFECT_HANDLE_START);
  iVar1 = lib::L2CValue::as_integer(aLStack168);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack152,iVar1);
  lib::L2CValue::L2CValue(aLStack120,-1);
  uVar3 = lib::L2CValue::operator==(aLStack152,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack168);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,1);
    lib::L2CValue::operator+(aLStack136,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::operator=(aLStack136,aLStack152);
    lib::L2CValue::~L2CValue(aLStack152);
  }
  lib::L2CValue::L2CValue(aLStack168,_WEAPON_MASTER_ARROW1_STATUS_WORK_INT_EFFECT_HANDLE_START + 1);
  iVar1 = lib::L2CValue::as_integer(aLStack168);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack152,iVar1);
  lib::L2CValue::L2CValue(aLStack120,-1);
  uVar3 = lib::L2CValue::operator==(aLStack152,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack168);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,1);
    lib::L2CValue::operator+(aLStack136,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::operator=(aLStack136,aLStack152);
    lib::L2CValue::~L2CValue(aLStack152);
  }
  uVar11 = 0;
  this = (L2CValue *)((long)param_1 + 200);
  do {
    lib::L2CValue::L2CValue
              (aLStack168,uVar11 + _WEAPON_MASTER_ARROW1_STATUS_WORK_INT_EFFECT_HANDLE_START);
    iVar1 = lib::L2CValue::as_integer(aLStack168);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack152,iVar1);
    lib::L2CValue::L2CValue(aLStack120,-1);
    uVar3 = lib::L2CValue::operator==(aLStack152,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack168);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack120,uVar11 + _WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_EFFECT_TIP_POS_X_START)
      ;
      iVar1 = lib::L2CValue::as_integer(aLStack120);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack184,fVar12);
      lib::L2CValue::L2CValue
                (aLStack168,uVar11 + _WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_EFFECT_TIP_POS_Y_START)
      ;
      iVar1 = lib::L2CValue::as_integer(aLStack168);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack200,fVar12);
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x48,(L2CValue)0x38);
      lib::L2CValue::~L2CValue(aLStack200);
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::L2CValue
                (aLStack120,uVar11 + _WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_EFFECT_NEST_POS_X_START
                );
      iVar1 = lib::L2CValue::as_integer(aLStack120);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack216,fVar12);
      lib::L2CValue::L2CValue
                (aLStack248,uVar11 + _WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_EFFECT_NEST_POS_Y_START
                );
      iVar1 = lib::L2CValue::as_integer(aLStack248);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack232,fVar12);
      VVar10 = (Vector2f)aLStack232;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x28,SUB81(aLStack232,0));
      lib::L2CValue::~L2CValue(aLStack232);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::L2CValue(aLStack120,1);
      uVar3 = lib::L2CValue::operator<(aLStack120,aLStack136);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar3 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](this,4);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack168,0x18cdc1683);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack168,0x1fbdb2615);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x1fbdb2615);
        pWVar9 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
        lib::L2CValue::as_number(pLVar5);
        lib::L2CValue::as_number(pLVar6);
        lib::L2CValue::as_number(pLVar7);
        lib::L2CValue::as_number(pLVar8);
        app::WeaponSpecializer_MasterArrow1::set_arrow_max_end_effect(pWVar9,0,VVar10,(bool)param_4)
        ;
      }
      else {
        if (uVar11 == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](this,4);
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack168,0x18cdc1683);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack168,0x1fbdb2615);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack120,true);
          pWVar9 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
          lib::L2CValue::as_number(pLVar5);
          lib::L2CValue::as_number(pLVar6);
          lib::L2CValue::as_number(pLVar7);
          lib::L2CValue::as_number(pLVar8);
          uVar2 = lib::L2CValue::as_bool(aLStack120);
          app::WeaponSpecializer_MasterArrow1::set_arrow_max_end_effect
                    (pWVar9,uVar2 & 1,VVar10,(bool)param_4);
        }
        else {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](this,4);
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack168,0x18cdc1683);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack168,0x1fbdb2615);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack152,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack120,false);
          pWVar9 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
          lib::L2CValue::as_number(pLVar5);
          lib::L2CValue::as_number(pLVar6);
          lib::L2CValue::as_number(pLVar7);
          lib::L2CValue::as_number(pLVar8);
          uVar2 = lib::L2CValue::as_bool(aLStack120);
          app::WeaponSpecializer_MasterArrow1::set_arrow_max_end_effect
                    (pWVar9,uVar2 & 1,VVar10,(bool)param_4);
        }
        lib::L2CValue::~L2CValue(aLStack120);
      }
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack152);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  lib::L2CValue::~L2CValue(aLStack136);
  return;
}

