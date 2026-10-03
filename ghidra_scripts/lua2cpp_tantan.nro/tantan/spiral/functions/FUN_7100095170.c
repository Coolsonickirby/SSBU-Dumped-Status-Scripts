
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100095170(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  int iVar7;
  float fVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_INIT_ROTATE_Z);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      FUN_7100094dc0(this);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_INIT_ROTATE_Z);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  fVar8 = (float)app::lua_bind::PhysicsModule__get_2nd_active_node_num_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  if (-1 < iVar3) {
    iVar7 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack112,iVar7);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::PhysicsModule__get_2nd_touch_ground_line_num_impl
                        (this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,iVar4);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
        lib::L2CValue::L2CValue(aLStack112,0x292119e867);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar6,0);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_LASSO_STATUS_KIND_REWIND);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_71000953ac;
      }
      bVar2 = iVar7 < iVar3;
      iVar7 = iVar7 + 1;
    } while (bVar2);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000953ac:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

