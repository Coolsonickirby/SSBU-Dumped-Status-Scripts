
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002d130(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  FUN_710002cfe0(aLStack120);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack152,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
    iVar3 = lib::L2CValue::as_integer(aLStack152);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack136);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack152);
    if ((bVar1 & 1U) == 0) {
      FUN_710002d810(aLStack120,param_2);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((bVar1 & 1U) == 0) {
        pLVar6 = (L2CValue *)((long)param_2 + 200);
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
        lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
          lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator==(pLVar6,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack120,true);
            uVar5 = lib::L2CValue::operator==(param_4,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack296,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_FALL);
              lib::L2CValue::L2CValue(aLStack312,false);
              lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd8,(L2CValue)0xc8);
              lib::L2CValue::~L2CValue(aLStack312);
              lib::L2CValue::~L2CValue(aLStack296);
              goto LAB_710002d258;
            }
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack120,true);
          uVar5 = lib::L2CValue::operator==(param_3,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack120,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_PARENT_STATUS_KIND);
            iVar3 = lib::L2CValue::as_integer(aLStack120);
            iVar3 = app::lua_bind::WorkModule__get_int_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
            lib::L2CValue::L2CValue(aLStack136,iVar3);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_KIND_GUARD);
            uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack152,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_APPEAL);
              iVar3 = lib::L2CValue::as_integer(aLStack152);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
              lib::L2CValue::L2CValue(aLStack120,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::~L2CValue(aLStack152);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack232,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_APPEAL);
                lib::L2CValue::L2CValue(aLStack248,false);
                lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x18,(L2CValue)0x8);
                lib::L2CValue::~L2CValue(aLStack248);
                lib::L2CValue::~L2CValue(aLStack232);
                lib::L2CValue::L2CValue(param_1,1);
LAB_710002d544:
                lib::L2CValue::~L2CValue(aLStack136);
                return;
              }
              lib::L2CValue::L2CValue
                        (aLStack152,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_DAMAGE_PARENT);
              iVar3 = lib::L2CValue::as_integer(aLStack152);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
              lib::L2CValue::L2CValue(aLStack120,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::~L2CValue(aLStack152);
              if ((bVar1 & 1U) != 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,9);
                lib::L2CValue::L2CValue(aLStack120,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_WORRY);
                uVar5 = lib::L2CValue::operator==(pLVar4,aLStack120);
                lib::L2CValue::~L2CValue(aLStack120);
                if ((uVar5 & 1) == 0) {
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                  lib::L2CValue::L2CValue(aLStack120,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_WORRY);
                  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack120);
                  lib::L2CValue::~L2CValue(aLStack120);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack264,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_WORRY);
                    lib::L2CValue::L2CValue(aLStack280,false);
                    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xf8,(L2CValue)0xe8);
                    lib::L2CValue::~L2CValue(aLStack280);
                    lib::L2CValue::~L2CValue(aLStack264);
                    lib::L2CValue::L2CValue(param_1,1);
                    goto LAB_710002d544;
                  }
                }
              }
            }
            else {
              pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,9);
              lib::L2CValue::L2CValue(aLStack120,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_GUARD);
              uVar5 = lib::L2CValue::operator==(pLVar4,aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              if ((uVar5 & 1) == 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                lib::L2CValue::L2CValue(aLStack120,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_GUARD);
                uVar5 = lib::L2CValue::operator==(pLVar6,aLStack120);
                lib::L2CValue::~L2CValue(aLStack120);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack200,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_GUARD);
                  lib::L2CValue::L2CValue(aLStack216,false);
                  lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x38,(L2CValue)0x28);
                  lib::L2CValue::~L2CValue(aLStack216);
                  lib::L2CValue::~L2CValue(aLStack200);
                  lib::L2CValue::L2CValue(param_1,1);
                  goto LAB_710002d544;
                }
              }
            }
            lib::L2CValue::~L2CValue(aLStack136);
          }
        }
        bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
        if (((bVar1 & 1U) != 0) ||
           (bVar1 = lib::L2CValue::operator.cast.to.bool(param_6), (bVar1 & 1U) != 0)) {
          lib::L2CValue::L2CValue(aLStack328,param_5);
          FUN_710002df30(param_1,param_2,aLStack328);
          lib::L2CValue::~L2CValue(aLStack328);
          return;
        }
        iVar3 = 0;
        goto LAB_710002d260;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack168,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW);
      lib::L2CValue::L2CValue(aLStack184,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x58,(L2CValue)0x48);
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::~L2CValue(aLStack168);
    }
  }
LAB_710002d258:
  iVar3 = 1;
LAB_710002d260:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

