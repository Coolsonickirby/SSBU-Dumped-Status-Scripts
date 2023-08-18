
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::Standby_main(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  HitStatus HVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  void *pvVar9;
  ulong uVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_OFF);
  HVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_DEAD_PARENT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_DEAD);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      pvVar9 = (void *)app::WeaponSpecializer_RosettaTico::owner_module_accessor(pBVar8);
      if (pvVar9 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&FIGHTER_PAD_CMD_CAT2_FLAG_AIR_LASSO);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,pvVar9);
      }
      lib::L2CValue::L2CValue(aLStack128,true);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      iVar4 = app::FighterUtil::get_opponent_fighter_num(pBVar8,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,2);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,3);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,4);
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,5);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,6);
              uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar6 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,7);
                uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                if ((uVar6 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
                  lib::L2CValue::L2CValue(aLStack144,0x12141916de);
                  uVar6 = lib::L2CValue::as_integer(aLStack128);
                  uVar10 = lib::L2CValue::as_integer(aLStack144);
                  iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                                    (this->moduleAccessor,uVar6,uVar10);
                  lib::L2CValue::L2CValue(aLStack80,iVar4);
                  lib::L2CValue::operator_(aLStack96,aLStack80);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
                  lib::L2CValue::L2CValue(aLStack144,0x142f28bfb2);
                  uVar6 = lib::L2CValue::as_integer(aLStack128);
                  uVar10 = lib::L2CValue::as_integer(aLStack144);
                  iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                                    (this->moduleAccessor,uVar6,uVar10);
                  lib::L2CValue::L2CValue(aLStack80,iVar4);
                  lib::L2CValue::operator_(aLStack96,aLStack80);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
                lib::L2CValue::L2CValue(aLStack144,0x14582f8f24);
                uVar6 = lib::L2CValue::as_integer(aLStack128);
                uVar10 = lib::L2CValue::as_integer(aLStack144);
                iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                                  (this->moduleAccessor,uVar6,uVar10);
                lib::L2CValue::L2CValue(aLStack80,iVar4);
                lib::L2CValue::operator_(aLStack96,aLStack80);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
              lib::L2CValue::L2CValue(aLStack144,0x14c126de9e);
              uVar6 = lib::L2CValue::as_integer(aLStack128);
              uVar10 = lib::L2CValue::as_integer(aLStack144);
              iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                                (this->moduleAccessor,uVar6,uVar10);
              lib::L2CValue::L2CValue(aLStack80,iVar4);
              lib::L2CValue::operator_(aLStack96,aLStack80);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
            lib::L2CValue::L2CValue(aLStack144,0x14b621ee08);
            uVar6 = lib::L2CValue::as_integer(aLStack128);
            uVar10 = lib::L2CValue::as_integer(aLStack144);
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar10)
            ;
            lib::L2CValue::L2CValue(aLStack80,iVar4);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
          lib::L2CValue::L2CValue(aLStack144,0x1428457bab);
          uVar6 = lib::L2CValue::as_integer(aLStack128);
          uVar10 = lib::L2CValue::as_integer(aLStack144);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar10);
          lib::L2CValue::L2CValue(aLStack80,iVar4);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
        lib::L2CValue::L2CValue(aLStack144,0x145f424b3d);
        uVar6 = lib::L2CValue::as_integer(aLStack128);
        uVar10 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar10);
        lib::L2CValue::L2CValue(aLStack80,iVar4);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_STANDBY_WORK_INT_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_STANDBY_WORK_INT_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_71000419b0);
  lib::L2CValue::operator_(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Standby_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

