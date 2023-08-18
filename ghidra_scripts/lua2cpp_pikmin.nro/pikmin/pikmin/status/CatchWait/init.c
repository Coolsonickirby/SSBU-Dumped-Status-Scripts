
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::CatchAttack_init(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  FighterModuleAccessor *pFVar7;
  ulong uVar8;
  L2CValue *this_01;
  code *pcVar9;
  long *plVar10;
  int iVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar7 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar7);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_CATCH_WAIT);
  uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_CATCH_ATTACK);
    uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_CATCH_CUT);
      uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_THROW);
        uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar8 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_THROW_KIRBY);
          uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0);
            uVar8 = lib::L2CValue::operator_(aLStack112,aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,1);
              lib::L2CValue::operator_(aLStack128,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              iVar3 = lib::L2CValue::as_integer(aLStack144);
              lib::L2CValue::_L2CValue(aLStack144);
              if (-1 < iVar3) {
                iVar11 = -1;
                do {
                  lib::L2CValue::L2CValue
                            (aLStack112,
                             iVar11 + 
                             _FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0 + 1);
                  iVar4 = lib::L2CValue::as_integer(aLStack112);
                  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
                  lib::L2CValue::L2CValue(aLStack144,iVar4);
                  lib::L2CValue::_L2CValue(aLStack112);
                  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
                  iVar4 = lib::L2CValue::as_integer(aLStack160);
                  uVar5 = lib::L2CValue::as_integer(aLStack144);
                  bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar4,uVar5);
                  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
                  lib::L2CValue::_L2CValue(aLStack112);
                  lib::L2CValue::_L2CValue(aLStack160);
                  if ((bVar2 & 1U) != 0) {
                    app::LinkEvent::new_l2c_table();
                    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x105a79305b);
                    lib::L2CValue::L2CValue(aLStack112,0x18a6e37a82);
                    lib::L2CValue::operator_(pLVar6,aLStack112);
                    lib::L2CValue::_L2CValue(aLStack112);
                    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
                    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0xaa79e68a2);
                    lib::L2CValue::operator_(this_01,pLVar6);
                    lib::L2CValue::L2CValue(aLStack192,_LINK_NO_ARTICLE);
                    iVar4 = lib::L2CValue::as_integer(aLStack192);
                    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x11f63699bf);
                    pcVar9 = (code *)lib::L2CValue::as_pointer(pLVar6);
                    plVar10 = (long *)(*pcVar9)();
                    app::lua_bind::LinkEvent__load_from_l2c_table_impl
                              ((LinkEvent *)plVar10,aLStack160);
                    app::lua_bind::LinkModule__send_event_nodes_struct_impl
                              (this->moduleAccessor,iVar4,(LinkEvent *)plVar10,0);
                    app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar10);
                    lib::L2CValue::L2CValue(aLStack176,aLStack112);
                    lib::L2CValue::_L2CValue(aLStack112);
                    (**(code **)(*plVar10 + 8))(plVar10);
                    lib::L2CValue::_L2CValue(aLStack176);
                    lib::L2CValue::_L2CValue(aLStack192);
                    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
                    iVar4 = lib::L2CValue::as_integer(aLStack112);
                    app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar4);
                    lib::L2CValue::_L2CValue(aLStack112);
                    lib::L2CValue::_L2CValue(aLStack160);
                  }
                  lib::L2CValue::_L2CValue(aLStack144);
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar3);
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

